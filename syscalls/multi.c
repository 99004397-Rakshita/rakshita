#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>

int files = 0;
int count = 1;

void main(int argc, char *argv[])
{
	int status;
    files=argc-1;
    while (count!=files)
    {
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
                execl("/usr/bin/gcc","gcc","-c",argv[count],NULL);
                exit(0);
            }
        }
    
        else
        {
            waitpid(ret, &status, 0);
            count++;

        }
    }
}
    
    