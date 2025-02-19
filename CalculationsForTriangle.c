// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Write C code here
    int choice;
    char ch;
    float a, b, c, s, base, height, side, oneSide, hypotenuse, rightAngleProducingArm, result;

    printf("\nCalculations in Triangle \n");

    while (1)
    {
        printf("\n-----Choose what to calculate-----\n");
        printf("\n0. Exit.\n");
        printf("1. Semiperimeter of a Triangle.\n");
        printf("2.Area of a Triangle (using Heron's formula)\n");
        printf("3. Area of a Triangle (using Base and Height).\n");
        printf("4. Area of a Equilateral Triangle.\n");
        printf("5. Height of a Equilateral Triangle.\n");
        printf("6. If perpendiculars are drawn from a point inside an equilateral triangle to its sides, then:\n");
        printf("\t(a) Area of the Equilateral Triangle.\n");
        printf("\t(b)  Side of the Equilateral Triangle.\n");
        printf("7. Area of a  Isosceles Triangle.\n");
        printf("8. Height of a Isosceles Triangle.\n");
        printf("9. Area of a Isosceles Right Angle Triangle(using Hypotenuse).\n");
        printf("10. Area of a Isosceles Right Angle Triangle (using Length of Right angle Producing Arm).\n");
        printf("11. Perimeter of a Isosceles Right Angle Triangle.\n");
        printf("\nEnter Your Choice ( 0/ 1/ 2/ 3/ 4/ 5/ 6/ 7/ 8/ 9/ 10 or 11 ) : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            exit(0);
            break;
        case 1:
            printf("Enter the valus of a : ");
            scanf("%f", &a);
            printf("Enter the valus of b : ");
            scanf("%f", &b);
            printf("Enter the valus of c : ");
            scanf("%f", &c);
            result = (a + b + c) / 2;
            printf("The Semiperimeter of a Trialngl is : %.2f\n", result);
            break;
        case 2:
            printf("Enter the value of s : ");
            scanf("%f", &s);
            printf("Enter the valus of a : ");
            scanf("%f", &a);
            printf("Enter the valus of b : ");
            scanf("%f", &b);
            printf("Enter the valus of c : ");
            scanf("%f", &c);
            result = sqrt(s * (s - a) * (s - b) * (s - c));
            printf("The Area of a Triangle is : %.2f\n square units", result);
            break;
        case 3:
            printf("Enter the Base : ");
            scanf("%f", &base);
            printf("Enter the Height : ");
            scanf("%f", &height);
            result = (base * height) / 2;
            printf("The Area of a Triangle is : %.2f square units", result);
            break;
        case 4:
            printf("Enter the Side : ");
            scanf("%f", &side);
            result = (sqrt(3) / 4) * pow(side, 2);
            printf("The Area of a Equilateral Triangle is : %.2f square units", result);
            break;
        case 5:
            printf("Enter the One Side : ");
            scanf("%f", &oneSide);
            result = (sqrt(3) / 2) * oneSide;
            printf("The Height of a Equilateral Triangle is : %.2f", result);
            break;
        case 6:
            printf("Enter the value a or b to calculate : ");
            scanf(" %c", &ch);
            switch (ch)
            {
            case 'a':
                printf("where the lengths of the perpendiculars dropped on sides a, b, and c are\n");
                printf("Enter the valus of a : ");
                scanf("%f", &a);
                printf("Enter the valus of b : ");
                scanf("%f", &b);
                printf("Enter the valus of c : ");
                scanf("%f", &c);
                result = (1 / sqrt(3)) * pow((a + b + c), 2);
                printf("The Area of a Equilateral Triangle is : %.2f", result);
                break;
            case 'A':
                printf("where the lengths of the perpendiculars dropped on sides a, b, and c are\n");
                printf("Enter the valus of a : ");
                scanf("%f", &a);
                printf("Enter the valus of b : ");
                scanf("%f", &b);
                printf("Enter the valus of c : ");
                scanf("%f", &c);
                result = (1 / sqrt(3)) * pow((a + b + c), 2);
                printf("The Area of a Equilateral Triangle is : %.2f", result);
                break;
            case 'b':
                printf("Enter the valus of a : ");
                scanf("%f", &a);
                printf("Enter the valus of b : ");
                scanf("%f", &b);
                printf("Enter the valus of c : ");
                scanf("%f", &c);
                result = (2 / sqrt(3)) * (a + b + c);
                printf("The Side of a Equilateral Triangle is : %.2f", result);
                break;
            case 'B':
                printf("Enter the valus of a : ");
                scanf("%f", &a);
                printf("Enter the valus of b : ");
                scanf("%f", &b);
                printf("Enter the valus of c : ");
                scanf("%f", &c);
                result = (2 / sqrt(3)) * (a + b + c);
                printf("The Side of a Equilateral Triangle is : %.2f", result);
                break;

            default:
                printf("\nInvalid choice! Please enter a or b.\n");
            }
            break;
        case 7:
            printf("Enter the valus of a : ");
            scanf("%f", &a);
            printf("Enter the valus of b : ");
            scanf("%f", &b);
            result = (b / 4) * sqrt(4 * pow(a, 2) - pow(b, 2));
            printf("The Area of a Isosceles Triangle is : %.2f square unit", result);
            break;
        case 8:
            printf("Enter the Length a : ");
            scanf("%f", &a);
            printf("Enter the Base b : ");
            scanf("%f", &b);
            result = sqrt(4 * pow(a, 2) - pow(b, 2)) / 2;
            printf("The Height of a Isosceles Triangle is : %.2f", result);
            break;
        case 9:
            printf("Enter the valus of Hypotenuse : ");
            scanf("%f", &hypotenuse);
            result = pow(hypotenuse, 2) / 4;
            printf("The Area of a Isosceles Right Triangle is : %.2f", result);
            break;
        case 10:
            printf("Enter the Right angle Producing Arm : ");
            scanf("%f", &rightAngleProducingArm);
            result = pow(rightAngleProducingArm, 2) / 2;
            printf("The Area of a Isosceles Right angle Triangle is : %.2f", result);
            break;
        case 11:
            printf("Enter the Length of Right angle Producing Arm : ");
            scanf("%f", &a);
            result = a * (2 + sqrt(2));
            printf("The Perimeter of a Isosceles Right angle Triangle is : %.2f", result);
            break;
        default:
            printf("\nInvalid choice! Please enter 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 or 11.\n");
        }
    }
    return 0;
}