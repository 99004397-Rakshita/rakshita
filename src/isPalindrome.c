#include "myutils.h"
// A function to check if a string str is palindrome
int isPalindrome(char str[])
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = strlen(str) - 1;
    int flag=1;
  
    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            flag=0;
            return flag;
        }
    }
    return flag;
}