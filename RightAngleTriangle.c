// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float calculateLength_Base(float a, float b)
{

    a = pow(a, 2);
    b = pow(b, 2);
    float c = a - b;
    return sqrt(c);
}
float calculateHypotenuse(float a, float b)
{

    a = pow(a, 2);
    b = pow(b, 2);
    float c = a + b;
    return sqrt(c);
}

int main()
{
    // Right Angle Triangle
    int choice;
    float hypotenuse, length, base, result, a, b;

    printf("Mensuration of Right Angle Triangle ");

    while (1)
    {
        printf("\n-----Choose what to calculate-----\n");
        printf("\n0. Exit.\n");
        printf("1. Calculate Hypotenuse.\n");
        printf("2. Calculate Length.\n");
        printf("3. Calculate Base.\n");
        printf("\nEnter Your Choice (0/1/2 or 3) : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            exit(0);
            break;
        case 1:
            printf("Enter the Length : ");
            scanf("%f", &a);
            printf("Enter the Base : ");
            scanf("%f", &b);
            result = calculateHypotenuse(a, b);
            printf("The Hypotenuse is : %.2f", result);
            break;
        case 2:
            printf("Enter the Hypotenuse : ");
            scanf("%f", &a);
            printf("Enter the Base : ");
            scanf("%f", &b);
            result = calculateLength_Base(a, b);
            printf("The Length is : %.2f", result);
            break;
        case 3:
            printf("Enter the Hypotenuse : ");
            scanf("%f", &a);
            printf("Enter the Length : ");
            scanf("%f", &b);
            result = calculateLength_Base(a, b);
            printf("The Base is : %.2f", result);
            break;
        }
    }
    return 0;
}
