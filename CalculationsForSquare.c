// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Write C code here
    int choice;
    float Area, Side,  Diagonal, Perimeter,  result;

    printf("\nCalculations in Rectangle\n");

    while (1)
    {

        printf("\n\n-----Choose what to calculate-----\n");
        printf("\n0. Exit.\n");
        printf("1. Perimeter of a Square.\n");
        printf("2. Side of a Square (using Perimeter).\n");
        printf("3. Diagonal of a Square.\n");
        printf("4. One Side of a Square.\n");
        printf("5. Area of a Square.\n");
        printf("6. Side of a Square (using Area).\n");

        printf("\nEnter Your Choice ( 0/ 1/ 2/ 3/ 4/ 5 or 6 ) : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            exit(0);
            break;
        case 1:
            printf("Enter the Side : ");
            scanf("%f", &Side);
            result = 4 * Side;
            printf("The Perimeter of a Square is : %.2f", result);
            break;
        case 2:
            printf("Enter the Perimeter : ");
            scanf("%f", &Perimeter);
            result = Perimeter / 4;
            printf("The Side of a Square is : %.2f", result);
            break;
        case 3:
            printf("Enter the Side : ");
            scanf("%f", &Side);
            result = sqrt(2) * Side;
            printf("The Diagonal of a Square is : %.2f", result);
            break;
        case 4:
            printf("Enter the Diagonal : ");
            scanf("%f", &Diagonal);
            result = Diagonal / sqrt(2);
            printf("The One Side of a Square is : %.2f", result);
            break;
        case 5:
            printf("Enter the Side : ");
            scanf("%f", &Side);
            result = pow(Side, 2);
            printf("The Area of Square is : %.2f", result);
            break;
        case 6:
            printf("Enter the Area : ");
            scanf("%f", &Area);
            result = sqrt(Area);
            printf("The Side of a Square is : %.2f", result);
            break;

        default:
            printf("Invalid choice! Please enter 1, 2, 3, 4, 5 or 6.\n");
            continue;
        }
    }

    return 0;
}