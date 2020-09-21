/**
 * C program to set nth bit of a number to 1
 */

#include <stdio.h>

int main()
{
    int num, n, newNum;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    /* Input bit position you want to set */
    printf("Enter nth bit to set to 1 (0-31): ");
    scanf("%d", &n);

    /*
     * Left shifts 1, n times
     * then perform bitwise OR with num
     */
    newNum = num | (1 << n);

    printf("Bit toggled successfully.\n\n");
    printf("Number before setting to 1 %d bit: %d (in decimal)\n", n, num);
    printf("Number after setting to 1 %d bit: %d (in decimal)\n", n, newNum);

    return 0;
}
