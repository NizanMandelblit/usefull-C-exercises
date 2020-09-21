#include<stdio.h>

//Write a C program to input any number from user and check
 // whether the Least Significant Bit (MSB) of the given number is set (1) or not (0).
 //Important note: Most Significant Bit of positive number is always 0 (in 2s complement) and negative number is 1.
int main()
{

int number;
printf("enter a number\n");
scanf("%d", &number);
int shifting=sizeof(int)*8;
//creating msb mask
int mask=1<<(shifting-1);
//if the msb is 0 the the resulting AND bitwise operation will be 0.
if((number&mask)==0)
    printf("the msb is not set");
else
    printf("the msb is set");
    return 0;
}

