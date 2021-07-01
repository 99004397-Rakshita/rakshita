#include <stdio.h>
#include "bitmask.h"
int setBit(int n, int k)
{
    return (n | (1 << (k - 1)));
}