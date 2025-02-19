// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Discount calculator
    int choice, ch;
    float discount, originalPrice, discountPercentage, gradualDiscount, Dues, cashDiscount, sellingPrice, discountRate, result;

    printf("Calculate the Discount\n");

    while (1)
    {
        printf("\n-----Choose what to calculate-----\n");
        printf("\n0. Exit.\n");
        printf("1. Calculate Discount.\n");
        printf("2. Calculate Discount Percentage.\n");
        printf("3. Calculate Gradual Discount .\n");
        printf("4. Calculate Dues Price.\n");
        printf("5. Calculate Cash Discount.\n");
        printf("6. Calculate Selling Price.\n");
        printf("7. Calculate Discount using Selling Price.\n");
        printf("8. Calculate Selling Price using Discount Percentage (r%%).\n");
        printf("\nEnter Your Choice (0/1/2/3/4/5/6/7/8) : ");
        scanf("%d", &choice);
        switch (choice)
        {

        case 0:
            exit(0);
        case 1:
            printf("\nEnter the Original Price  : ");
            scanf("%f", &originalPrice);
            printf("Enter the Discount Rate: ");
            scanf("%f", &discountRate);
            result = (originalPrice * discountRate) / 100;
            printf("The Discount is : %.2f rupee\n", result);
            break;

        case 2:
            printf("\nEnter the Original Price  : ");
            scanf("%f", &originalPrice);
            printf("Enter the Discount Rate: ");
            scanf("%f", &discountRate);
            result = (discountRate * 100) / originalPrice;
            printf("The Discount Percentage is : %.2f%%\n", result);
            break;

        case 3:
            printf("\nEnter the Original Price : ");
            scanf("%f", &originalPrice);
            printf("Enter the Discount Rate : ");
            scanf("%f", &discountRate);
            result = originalPrice - originalPrice * (discountRate / 100);
            printf("The Gradual Discount is : %.2f rupee\n", result);
            break;

        case 4:
            printf("\nEnter the Original Price : ");
            scanf("%f", &originalPrice);
            printf("Enter the Discount Rate : ");
            scanf("%f", &discountRate);
            discount = (originalPrice * discountRate) / 100;
            result = originalPrice - discount;
            printf("The Dues is : %.2f rupee\n", result);
            break;

        case 5:
            printf("\nEnter the Original Price : ");
            scanf("%f", &originalPrice);
            printf("---Discount Menu---\n");
            printf("1. Cash Discount 20%%\n");
            printf("2. After 15 days Cash Discount 15%%\n");
            printf("3. After 25 days Cash Discount 10%%\n");
            printf("4. After 30 days Cash Discount 5%%\n");
            printf("5. After 50 days Cash Discount 1%%\n");
            printf("Enter your Choice : ");
            scanf("%d", &ch);

            switch (ch)
            {
            case 1:
                discountRate = 20;
                result = (originalPrice * discountRate) / 100;
                Dues = originalPrice - result;
                printf("The Cash Discount is : %.2f\n", result);
                printf("The Dues is : %.2f rupee\n", Dues);
                break;
            case 2:
                discountRate = 15;
                result = (originalPrice * discountRate) / 100;
                Dues = originalPrice - result;
                printf("The Cash Discount is : %.2f\n", result);
                printf("The Dues is : %.2f rupee\n", Dues);
                break;
            case 3:
                discountRate = 10;
                result = (originalPrice * discountRate) / 100;
                Dues = originalPrice - result;
                printf("The Cash Discount is : %.2f\n", result);
                printf("The Dues is : %.2f rupee\n", Dues);
                break;
            case 4:
                discountRate = 5;
                result = (originalPrice * discountRate) / 100;
                Dues = originalPrice - result;
                printf("The Cash Discount is : %.2f\n", result);
                printf("The Dues is : %.2f rupee\n", Dues);
                break;
            case 5:
                discountRate = 1;
                result = (originalPrice * discountRate) / 100;
                Dues = originalPrice - result;
                printf("The Cash Discount is : %.2f\n", result);
                printf("The Dues is : %.2f rupee\n", Dues);
                break;

            default:
                printf("Enter the Correct Choice (1/2/3/4/5)");
            }

            break;

        case 6:
            printf("\nEnter the Original Price : ");
            scanf("%f", &originalPrice);
            printf("Enter the Discount Rate : ");
            scanf("%f", &discountRate);
            discount = (originalPrice * discountRate) / 100;
            result = originalPrice - discount;
            printf("The Selling Price is : %.2f rupee\n", result);
            break;

        case 7:
            printf("\nEnter the Original Price : ");
            scanf("%f", &originalPrice);
            printf("Enter the Discount Rate : ");
            scanf("%f", &discountRate);
            sellingPrice = (originalPrice * discountRate) / 100;
            result = originalPrice - sellingPrice;
            printf("The Purchase Price is : %.2f\n", result);
            break;

        case 8:
            printf("\nEnter the Original Price : ");
            scanf("%f", &originalPrice);
            printf("Enter the Discount Rate : ");
            scanf("%f", &discountRate);
            result = originalPrice * (100 - discountRate);
            printf("The Selling Price is : %.2f rupees \n", result);
            break;

        default:
            printf("Invalid choice! Please enter 1, 2, 3, 4, 5, 6, or 7.\n");
            continue;
        } // Switch Ends
    } // While Ends

    return 0;
} // main Ends