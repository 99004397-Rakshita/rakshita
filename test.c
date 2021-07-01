#include <stdio.h>
#include <string.h>
#include "bitmask.h"
#include "myutils.h"
#include "mystr.h"

int main()
{
    int n = 5, k = 1, num = 4;
    char str[]="hello";
    
  
    printf("%d with %d-th bit set: %d\n",
           n, k, setBit(n, k));
    printf("%d with %d-th bit Cleared: %d\n",
           n, k, clearBit(n, k));
    printf("%d with %d-th bit Toggled: %d\n",
           n, k, flip(n, k));
    printf("Bit number %d is changed to number %d.\n",
           n,num, query(num,n));

    printf("checking prime or not:",isPrime(n));
    printf("checking palindrome or not:",isPalindrome(str));
    printf("The factorial of %d is:",n,factorial(n));
    printf("sum of infinite arguments:",vsum(num,...));
return 0;
}