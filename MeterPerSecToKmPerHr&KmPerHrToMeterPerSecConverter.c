// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int num;
    float a, b, result;
//Meter/second to Kilometer/hours Converter and Miles/hours to Meter/second Converter
    printf("Enter the number 1 to convert Meter/second to Kilometer/hours and number 2 to convert Kilometer/hours to Meter/second : ");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("\nEnter the number in Meter/second : ");
        scanf("%f", &a);
        result = a * 18 / 5;
        printf("\nThe %.2fMeter/second in Kilometer/hours is : %.2f", a, result);
    }
    else if (num == 2)
    {
        printf("\nEnter the number in Kilometer/hours : ");
        scanf("%f", &b);
        result = b * 5 / 18;
        printf("\nThe %.2fKilometer/hours in Meter/second is : %.2f", b, result);
    }
    else
    {
        printf("Enter the Correct number 1 or 2");
    }

    return 0;
}
