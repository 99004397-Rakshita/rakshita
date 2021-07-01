#include <stdio.h>
#include "bitmask.h"
int query(int num, int n)
{
    if(num & (1<<n))
		printf("Bit number %d is SET in number %d.\n",n,num);
	else
		printf("Bit number %d is not SET in number %d.\n",n,num);
	
}