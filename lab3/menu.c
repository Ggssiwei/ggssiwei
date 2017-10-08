/***********************************************************************/
/*Copyright (C)   GeSong, sa517089@mail.ustc.edu.cn                    */
/*FILE NAME             : licklist.c 								   */
/*PRINCIPAL AUTHOR      : GeSong									   */
/*DATE OF FIRST RELEASE : 2017/10/8									   */
/*DESCRIPTION			: linklist for the menu						   */
/*LANGUAGE				: C	   										   */
/***********************************************************************/

#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>
#include "linklist.h"  
  
  
/* cmd functions */
void help();
void quit();
void bark();
void add2();
void bigcmp();
void smallcmp();

#define CMD_MAX_LEN 128  
#define DESC_LEN    1024  
#define CMD_NUM     10  
   
static tDataNode head[] =  
{  
    {"help", "This is help CMD.", help, &head[1]},
    {"quit", "This is exit CMD.", quit, &head[2]},
    {"bark", "There is a dog barking now!", bark, &head[3]},
	{"add2", "add 2 number into 1.", add2, &head[4]},
	{"bigcmp", "compare two number who is bigger.", bigcmp, &head[5]},
	{"samllcmp", "compare two number who is samller.", smallcmp, NULL}
};  
  
  
int main(int argc, char *argv[]) 
{  
    /* cmd line begins */  
    while (1)  
    {  
        char cmd[CMD_MAX_LEN];  
   		printf("Input a cmd number > ");  
     	scanf("%s", cmd);  
     	tDataNode* p = FindCmd(head, cmd);  
        if (p == NULL)  
  	    {  
          printf("This is a wrong cmd!\n");  
		  ShowAllCmd(head);
          continue;  
    	 }  
  
	     printf("%s - %s\n", p->cmd, p->desc);  
	         if (p->handler != NULL)  
	     {  
	          p->handler();  
	     }  
	  
    }  
    return 0;
}


//CMD functions
void help()
{
	ShowAllCmd(head);
}

void quit()
{
	exit(0);
}

void bark()
{
	printf("汪！汪！\n");
}

void add2()
{
	int a,b;
	printf("Please input two integers:\n");
	scanf("%d",&a);
	printf("second number:\n");
	scanf("%d",&b);
	printf("%d",(a+b));
}

void bigcmp()
{
	int a,b;
	printf("Please input two integers:\n");
	scanf("%d",&a);
	printf("second number:\n");
	scanf("%d",&b);
	if(a-b)
	{
		printf("%d",a);
	}
	else
	{
		printf("%d",b);	
	}
}

void smallcmp()
{
	int a,b;
	printf("Please input two integers:\n");
	scanf("%d",&a);
	printf("second number:\n");
	scanf("%d",&b);
	if(a-b)
	{
		printf("%d",b);
	}
	else
	{
		printf("%d",a);
	}
}

