// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Write C code here
    int choice;
    float celsius, fahrenheit, kelvin, result;

    printf("Temperature Converter\n");
    while (1)
    {
        printf("\n-----Choose what to calculate-----\n");
        printf("\n0. Exit.\n");
        printf("1. Celsius  to Fahrenheit.\n");
        printf("2. Celsius to Kelvin.\n");
        printf("3. Fahrenheit to Celsius.\n");
        printf("4. Fahrenheit to Kelvin.\n");
        printf("5. Kelvin to Celsius.\n");
        printf("6. Kelvin to Fahrenheit.\n");
        printf("\nEnter Your Choice ( 0/ 1/ 2/ 3/ 4/ 5/ 6 ) : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
            break;

        case 1:
            printf("Enter the Temperature in Celsius : ");
            scanf("%f", &celsius);
            result = (celsius * 9 / 5) + 32;
            printf("The Temperature in Fahrenheit is : %.0fdeg F\n\n", result);
            break;

        case 2:
            printf("Enter the Temperature in Celsius : ");
            scanf("%f", &celsius);
            result = celsius + 273.15;
            printf("The Temperature in Kelvin is : %.2fK", result);
            break;

        case 3:
            printf("Enter the Temperature in Fahrenheit : ");
            scanf("%f", &fahrenheit);
            result = (fahrenheit - 32) * 5 / 9;
            printf("The Temperature in Celsius is : %.2fdeg c", result);
            break;

        case 4:
            printf("Enter the Temperature in Fahrenheit : ");
            scanf("%f", &fahrenheit);
            result = ((fahrenheit - 32) / 1.8) + 273.15;
            printf("The Temperature in Kelvin is : %.2fK", result);
            break;

        case 5:
            printf("Enter the Temperature in Kelvin : ");
            scanf("%f", &kelvin);
            result = kelvin - 273.15;
            printf("The Temperature in Celsius is : %.2fdeg C", result);
            break;

        case 6:
            printf("Enter the Temperature in Kelvin : ");
            scanf("%f", &kelvin);
            result = 1.8 * (kelvin - 273.15) + 32;
            printf("The Temperature in Fahrenheit is : %.2fdeg F", result);
            break;

        default:
            printf("\nInvalid choice! Please enter 0, 1, 2, 3, 4, 5, or 6.\n");
            continue;
        }
    }
    return 0;
}