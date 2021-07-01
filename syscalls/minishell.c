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
    else if(argc==2)
    {
        if(strcmp(argv[1],"clear")==0)
        {
            execl("/usr/bin/clear","clear",NULL);
        }
        else if(strcmp(argv[1],"list")==0)
        {
            execl("/usr/bin/ls","ls",NULL);
        }
    }
	else if(argc>2)
    {
        if(strcmp(argv[1],"repeat")==0)
        {
            execl("/usr/bin/echo","echo",argv[2], NULL);
        }
        else if(strcmp(argv[1],"manual")==0)
        {
            execl("/usr/bin/man","clear",argv[2],NULL);
        }
        else if(strcmp(argv[1],"words")==0)
        {
            execl("/usr/bin/wc","wc","-w",argv[2],NULL);
        }
        else if(strcmp(argv[1],"lines")==0)
        {
            execl("/usr/bin/wc","wc","-l",argv[2],NULL);
        }
        else if(strcmp(argv[1],"chars")==0)
        {
            execl("/usr/bin/wc","wc","-m",argv[2],NULL);
        }
    }
    else
    {
        waitpid(ret, &status, 0);
        write(1,"end of parent process\n",25);
    }
    
}
    


		
