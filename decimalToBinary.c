/**
 * C program to convert decimal to binary
 */

#include <stdio.h>
#define INT_SIZE sizeof(int) * 8 /* Total number of bits in integer */

int main()
{
    int num=0, i;
    long result=0,power=1;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    for(i=0; i<INT_SIZE; i++)
    {
        result+=power*(num&1);
        num=num>>1;
        power*=10;
    }
    printf("in binary is %ld\n", result);

    return 0;
}
