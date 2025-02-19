// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int num, power, i, temp, result;
    // Find the Exponent of a number
    printf("Find the Exponent of a number\n");
    printf("\nEnter the base number to find Exponent : ");
    scanf("%d", &num);
    printf("Enter the Power of base number : ");
    scanf("%d", &power);

    result = 1;
    i = 0;
    while (i < power)
    {
        result *= num;
        i++;
    }

    printf("\nThe Exponent of %d is %d", num, result);

    return 0;
}