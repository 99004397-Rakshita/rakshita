#include "myutils.h"
int isPrime(int n)
{
    int flag=1;
    for (int i = 2; i <= n/2; i++) {
 
        // If n is divisible by any number between
        // 2 and n/2, it is not prime
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    return flag;
}
