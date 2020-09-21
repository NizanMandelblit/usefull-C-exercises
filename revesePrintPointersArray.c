
#include <stdio.h>
#include <string.h>
void printReverse(char **, int);
int main()
{
char **array=0;
array[0]="aba";
array[1]="ima";
array[2]="test";


    return 0;
}

void printReverse(char **array, int size)
{
    if(size==0)
        return;
    printReverse(array,size-1);
    printf("%s",array[size-1]);

}

