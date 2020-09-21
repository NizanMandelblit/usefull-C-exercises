/**
 * C program to revese a bits of a given char
 */

#include <stdio.h>
#define CHAR_SIZE sizeof(char) * 8 /* Size of char in bits */
//FOR EXEMPLE 13 IN BINARY IS 00001101 YOU SHOULD RETURN 10110000
int main()
{
    int i;
    char c=13;//IN BINARY IS 00001101
    char result=0;
    for(i=(CHAR_SIZE-1); i>=0; i--)
    {
        char mask=1<<i;
        result+=c&mask;
    }
    for(i=0; i<=CHAR_SIZE; i++)
    {
        printf("%d", result&1);
        result=result>>1;
    }

    return 0;
}




