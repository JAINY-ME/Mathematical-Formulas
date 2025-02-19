// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Write C code here
    int choice;
    float area, base, height, sumOfAdjacentSides, areaOfRhombus, diagonal1, diagonal2, oneSideOfRhombus, productOfDiagonal, sumOfParallelSides, sumOfTheLengthOfOppositeVertices, result;
    printf("\nCalculations in Quadrilateral \n");

    while (1)
    {
        printf("\n-----Choose what to calculate-----\n");
        printf("0. Exit.\n");
        printf("1. Area of a Parallelogram.\n");
        printf("2. Perimeter of a Parallelogram.\n");
        printf("3. Area of a Rhombus.\n");
        printf("4. One Diagonal of a Parallelogram (using area of a Parallelogram).\n");
        printf("5. One Side of a Parallelogram.\n");
        printf("6. One Diagonal of a Parallelogram (using one side of a Parallelogram).\n");
        printf("7. Area of a Trapezium.\n");
        printf("8. Area of a Quadrilateral.\n");
        printf("\nEnter Your Choice ( 0/ 1/ 2/ 3/ 4/ 5/ 6/ 7/ or 8 ) : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            exit(0);
            break;
        case 1:
            printf("Enter the Base : ");
            scanf("%f", &base);
            printf("Enter the Height : ");
            scanf("%f", &height);
            result = base * height;
            printf("Area of a Parallelogram is %.2f", result);
            break;
        case 2:
            printf("Enter the Sum of adjacent sides : ");
            scanf("%f", &sumOfAdjacentSides);
            result = 2 * sumOfAdjacentSides;
            printf("Perimeter of a Parallelogram is %.2f", result);
            ;
            break;
        case 3:
            printf("Enter the product of diagonal : ");
            scanf("%f", &productOfDiagonal);
            result = productOfDiagonal / 2;
            printf("Area of a Rhombus is %.2f", result);
            break;
        case 4:
            printf("Enter the Area of a Rhombus : ");
            scanf("%f", &areaOfRhombus);
            printf("Enter the Second Diagonal : ");
            scanf("%f", &diagonal2);
            result = (2 * areaOfRhombus) / diagonal2;
            printf("One Diagonal of a Rhombus is %.2f", result);
            break;
        case 5:
            printf("Enter the First Diagonal : ");
            scanf("%f", &diagonal1);
            printf("Enter the Second Diagonal : ");
            scanf("%f", &diagonal2);
            result = sqrt(pow(diagonal1 / 2, 2) + pow(diagonal2 / 2, 2));
            printf("One Side of a Rhombus is %.2f", result);
            break;
        case 6:
            printf("Enter the One Side of a Rhombus : ");
            scanf("%f", &oneSideOfRhombus);
            printf("Enter the Second Diagonal : ");
            scanf("%f", &diagonal2);
            result = 2 * sqrt(pow(oneSideOfRhombus, 2) - pow(diagonal2 / 2, 2));
            printf("One Diagonal of a Rhombus is %.2f", result);
            break;
            break;
        case 7:
            printf("Enter the Sum of parallel sides : ");
            scanf("%f", &sumOfParallelSides);
            printf("Enter the Height : ");
            scanf("%f", &height);
            result = sumOfParallelSides * height / 2;
            printf("Area of a Trapezium is %.2f", result);
            break;
        case 8:
            printf("Enter the First Diagonal : ");
            scanf("%f", &diagonal1);
            printf("Enter the Sum of the lengths of opposite vertices : ");
            scanf("%f", &sumOfTheLengthOfOppositeVertices);
            result = diagonal1 * sumOfTheLengthOfOppositeVertices / 2;
            printf("Area of a Quadrilateral is %.2f", result);
            break;
        default:
            printf("\nInvalid choice! Please enter 1, 2, 3, 4, 5, 6, 7 or 8.\n");
        }
    }
    return 0;
}