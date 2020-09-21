/**
 * C program to get the lowest set of bit of a number
 */

#include <stdio.h>

int main()
{
    int num,i,flag=0;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);
    for(i=0; i<(sizeof(int)*8); i++)
    {
        if((num%2)==1)
        {
            flag=i;
            break;
        }
        num=num>>1;
    }
    printf("the location of the highst bit that is 1 is %d", flag);
    return 0;
}
