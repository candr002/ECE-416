#include <sys/wait.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main()
{
	int pid = fork();
	int status;


            if (pid < 0)
                {
                printf( "Fork Failed\n\n");
                return 1;
                }
            else if (pid == 0)
            {
                int number;
                printf("\n\nNumber to perform factorial:  ");
                scanf("%d", &number);
                for (int i = (number-1); i > 0; i--)
                    number= number*i;

                printf("\n\nNew number is ");
		printf("%d", number);
                printf("\n");
		exit(1);
            }
            else if (pid > 0)
                waitpid(pid,&status,0);
        
return 0;
}
