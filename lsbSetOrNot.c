#include<stdio.h>

//Write a C program to input any number from user and check
 // whether the Least Significant Bit (LSB) of the given number is set (1) or not (0).
int main()
{

int number=0;
printf("enter a number\n");
scanf("%d", &number);
if((number%2)==1)
    printf("the lsb is set");
else
    printf("the lsb is not set");
    return 0;
}

