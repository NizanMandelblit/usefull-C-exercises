#include<stdio.h>

//Write a C program to input any number from user and check whether nth bit of the given number is set (1) or not (0).
int main()
{

int number,n;
printf("enter a number\n");
scanf("%d", &number);
printf("enter a n bit you want to know if its set or not\n");
scanf("%d",&n);
if(((number>>n)&1)!=0)
    printf("the n-ith bit is set");
else
    printf("the n-ith bit is NOT set");
    return 0;
}

