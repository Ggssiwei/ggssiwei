#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cmd[128];
    while(1)
    {
		printf("So,what do you want?\n");
		scanf("%s",cmd);
		if(strcmp(cmd,"help") == 0)
		{
			printf("You can use cmd under this line:\n");
			printf("help quit bark hello\n");
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
		else
		{
			printf("This is wrong cmd!\n");
		}
    }
    return 0;
}

