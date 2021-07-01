#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
	int status;
    int ret=fork();
	if(ret<0)
	{
		perror("fork");
		exit(1);
	}
	else if(ret==0)
	{
		if(argc==1)
        {
            printf("no argument");
            exit(1);
        }
        else if(argc>=2)
        {
            execl("/usr/bin/gcc","gcc",argv[1],"-o","output.out",NULL);

        }
    }
    else
    {
        waitpid(ret, &status, 0);
        write(1,"end of parent process\n",50);

    }
}