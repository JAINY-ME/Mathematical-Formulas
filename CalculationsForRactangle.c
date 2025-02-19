// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Write C code here
    int choice;
    float Area, Length, Width, Diagonal, Perimeter, Height, x, result;

    printf("\nCalculations in Rectangle\n");

    while (1)
    {

        printf("\n-----Choose what to calculate-----\n");
        printf("\n0. Exit.\n");
        printf("1. Perimeter of a Rectangle.\n");
        printf("2. Length of a Rectangle.\n");
        printf("3. Width of a Rectangle.\n");
        printf("4. Diagonal of a Rectangle.\n");
        printf("5. Area of all four Walls.\n");
        printf("6. Area of a Rectangle.\n");
        printf("7. Width of a Rectangle using Area and Length.\n");
        printf("8. Length of a Rectangle using Area and Width.\n");
        printf("9. If a rectangular garden has a path of uniform width (x) around it, then find the area of the path .\n");
        printf("10. If a rectangular garden has a path of uniform width (x) inside it, then find the area of the path .\n");
        printf("11. If a rectangular garden has a path of uniform width (x) running parallel to its length and width in the middle, then the area of the path .\n");
        printf("\n\nEnter Your Choice ( 0/ 1/ 2/ 3/ 4/ 5/ 6/ 7/ 8/ 9/ 10 or 11 ) : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            exit(0);
            break;
        case 1:
            printf("Enter the Length : ");
            scanf("%f", &Length);
            printf("Enter the Width : ");
            scanf("%f", &Width);
            result = 2 * (Length + Width);
            printf("The Perimeter of a rectangle is : %.2f", result);
            break;
        case 2:
            printf("Enter the Perimeter : ");
            scanf("%f", &Perimeter);
            printf("Enter the Width : ");
            scanf("%f", &Width);
            result = (Perimeter / 2) - Width;
            printf("The Length of a rectangle is : %.2f", result);
            break;
        case 3:
            printf("Enter the Perimeter : ");
            scanf("%f", &Perimeter);
            printf("Enter the Length : ");
            scanf("%f", &Length);
            result = (Perimeter / 2) - Length;
            printf("The Width of a rectangle is : %.2f", result);
            break;
        case 4:
            printf("Enter the Length : ");
            scanf("%f", &Length);
            printf("Enter the Width : ");
            scanf("%f", &Width);
            Length = pow(Length, 2);
            Width = pow(Width, 2);
            result = sqrt(Length + Width);
            printf("The Diagonal of a rectangle is : %.2f", result);
            break;
        case 5:
            printf("Enter the Height : ");
            scanf("%f", &Height);
            printf("Enter the Length : ");
            scanf("%f", &Length);
            printf("Enter the Width : ");
            scanf("%f", &Width);
            result = 2 * Height * (Length + Width);
            printf("The Area of all four Walls is : %.2f square unit", result);
            break;
        case 6:
            printf("Enter the Length : ");
            scanf("%f", &Length);
            printf("Enter the Width : ");
            scanf("%f", &Width);
            result = (Length * Width);
            printf("The Area of a rectangle is : %.2f", result);
            break;
        case 7:
            printf("Enter the Area : ");
            scanf("%f", &Area);
            printf("Enter the Length : ");
            scanf("%f", &Length);
            result = (Area / Length);
            printf("The Width of a rectangle is : %.2f", result);
            break;
        case 8:
            printf("Enter the Area : ");
            scanf("%f", &Area);
            printf("Enter the Width : ");
            scanf("%f", &Width);
            result = (Area / Width);
            printf("The Length of a rectangle is : %.2f", result);
            break;
        case 9:
            printf("Enter the uniform width of the path(x) : ");
            scanf("%f", &x);
            printf("Enter the Length : ");
            scanf("%f", &Length);
            printf("Enter the Width : ");
            scanf("%f", &Width);
            result = 2 * (Length + Width + 2 * x);
            printf("The Area of a rectangle is : %.2f squar unit", result);
            break;
        case 10:
            printf("Enter the uniform width of the path(x) : ");
            scanf("%f", &x);
            printf("Enter the Length : ");
            scanf("%f", &Length);
            printf("Enter the Width : ");
            scanf("%f", &Width);
            result = 2 * (Length + Width - 2 * x);
            printf("The Area of a rectangle is : %.2f squar unit", result);
            break;
        case 11:
            printf("Enter the uniform width of the path(x) : ");
            scanf("%f", &x);
            printf("Enter the Length : ");
            scanf("%f", &Length);
            printf("Enter the Width : ");
            scanf("%f", &Width);
            result = x * (Length + Width - x);
            printf("The Area of a rectangle is : %.2f squar unit", result);
            break;

        default:
            printf("Invalid choice! Please enter 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 or 11.\n");
            continue;
        }
    }

    return 0;
}