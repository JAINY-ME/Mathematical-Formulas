// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int num;
    float a, b, result;
    // Feet/second to Miles/hours Converter and Miles/hours to Feet/second Converter
    printf("Enter the number 1 to convert Feet/second to Miles/hours and number 2 to convert Miles/hours to Feet/second : ");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("\nEnter the number in Feet/second : ");
        scanf("%f", &a);
        result = a * 15 / 22;
        printf("\nThe %.2fFeet/second in Miles/hours is : %.2f", a, result);
    }
    else if (num == 2)
    {
        printf("\nEnter the number in Miles/hours : ");
        scanf("%f", &b);
        result = b * 22 / 15;
        printf("\nThe %.2fMiles/hours in Feet/second is : %.2f", b, result);
    }
    else
    {
        printf("Enter the Correct number 1 or 2");
    }

    return 0;
}
