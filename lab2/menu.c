#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cmd[128];
	int add2();
	int bigcmp();
	int smallcmp();
    while(1)

    {
		printf("So,what do you want?\n");
		scanf("%s",cmd);
		if(strcmp(cmd,"help") == 0)
		{
	
	printf("You can use cmd under this line:\n");
			printf("help quit bark hello\n");
			printf("eat  add2 bigcmp smallcmp\n");
		}	
		else if(strcmp(cmd,"quit") == 0)
		{
			exit(0);
		}
		else if(strcmp(cmd,"bark") == 0)
		{
			printf("wang!!wang!A dog just bark now!\n");
		}
		else if(strcmp(cmd,"hello") == 0)
		{
			printf("Hello!This is cmd menu. hahah!\n");
		}
		else if(strcmp(cmd,"eat") == 0)
		{
			printf("You want eat sonmething?\nWhat do you want to eat?\n");
			char food[128];
			scanf("%s",food);
			printf("So you want to eat %s.\nOK!I will give you %s.Now you eat it!\n",food,food);
		}
		else if(strcmp(cmd,"add2") == 0)
		{
			printf("Please input two number(int):\n");
			int a,b;
			printf("First number:\n");
			scanf("%d",&a);
			printf("Second number:\n");
			scanf("%d",&b);
			printf("%d add %d is %d!",a,b,add2(a,b));
		}
		else if(strcmp(cmd,"bigcmp") == 0)
		{
			printf("Please input two number(int):\n");
			int a,b;
			printf("First number:\n");
			scanf("%d",&a);
			printf("Second number:\n");
			scanf("%d",&b);
			printf("%d and %d ,%d is bigger!",a,b,bigcmp(a,b));	
		}
		else if(strcmp(cmd,"smallcmp") == 0)
		{
			printf("Please input two number(int):\n");
			int a,b;
			printf("First number:\n");
			scanf("%d",&a);
			printf("Second number:\n");
			scanf("%d",&b);
			printf("%d and %d ,%d is smaller!",a,b,smallcmp(a,b));	
		}
		else
		{
			printf("This is wrong cmd!\n");
		}
    }
    return 0;
}
// This is add2()

int add2(int a,int b)
{
	return a+b;
}
//This is bigcmp()

int bigcmp(int a,int b)
{
	if(a-b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
//This is smallcmp

int smallcmp(int a,int b)
{
	if(a-b)
	{
		return b;
	}
	else
	{
		return a;
	}
}

