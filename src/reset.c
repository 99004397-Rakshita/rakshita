#include <stdio.h>
#include "bitmask.h"
int clearBit(int n, int k)
{
    return (n & (~(1 << (k - 1))));
}