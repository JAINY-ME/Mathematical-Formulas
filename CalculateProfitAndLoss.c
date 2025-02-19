// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Profit and loss calculator
    int choice;
    float profit, loss, profitPercentage, lossPercentage, sellingPrice, purchasePrice, profitRate, lossRate, result;

    printf("Calculate the Profit and Loss\n");

    while (1)
    {
        printf("\n-----Choose what to calculate-----\n");
        printf("\n0. Exit.\n");
        printf("1. Calculate Profit.\n");
        printf("2. Calculate Loss.\n");
        printf("3. Calculate Profit Percentage.\n");
        printf("4. Calculate Loss Percentage.\n");
        printf("5. Calculate Selling Price using Profit rate(r%%).\n");
        printf("6. Calculate Purchase Price using Profit rate(r%%).\n");
        printf("7. Calculate Purchase Price using Loss rate.\n");
        printf("\nEnter Your Choice (0/1/2/3/4/5/6/7) : ");
        scanf("%d", &choice);
        switch (choice)
        {

        case 0:
            exit(0);
        case 1:
            printf("\nEnter the Selling Price : ");
            scanf("%f", &sellingPrice);
            printf("Enter the Purchase Price : ");
            scanf("%f", &purchasePrice);
            result = sellingPrice - purchasePrice;
            printf("The Profit is : %.2f rupee\n", result);
            break;

        case 2:
            printf("\nEnter the Selling Price : ");
            scanf("%f", &sellingPrice);
            printf("Enter the Purchase Price : ");
            scanf("%f", &purchasePrice);
            result = purchasePrice - sellingPrice;
            printf("The Loss is : %.2f rupee\n", result);
            break;

        case 3:
            printf("\nEnter the Selling Price : ");
            scanf("%f", &sellingPrice);
            printf("Enter the Purchase Price : ");
            scanf("%f", &purchasePrice);
            profit = sellingPrice - purchasePrice;
            result = (profit * 100) / purchasePrice;
            printf("The Profit Percentage is : %.2f%%\n", result);
            break;

        case 4:
            printf("\nEnter the Selling Price : ");
            scanf("%f", &sellingPrice);
            printf("Enter the Purchase Price : ");
            scanf("%f", &purchasePrice);
            loss = purchasePrice - sellingPrice;
            result = (loss * 100) / purchasePrice;
            printf("The Loss Percentage is : %.2f%%\n", result);
            break;

        case 5:
            printf("Enter the Purchase Price : ");
            scanf("%f", &purchasePrice);
            printf("Enter the Profit Rate r%%  : ");
            scanf("%f", &profitRate);
            result = purchasePrice * (1 + profitRate / 100);
            printf("The Selling Price is : %.2f\n", result);
            break;

        case 6:
            printf("\nEnter the Selling Price : ");
            scanf("%f", &sellingPrice);
            printf("Enter the Profit Rate r%%  : ");
            scanf("%f", &profitRate);
            result = sellingPrice / (1 + profitRate / 100);
            printf("The Purchase Price is : %.2f\n", result);
            break;

        case 7:
            printf("\nEnter the Selling Price : ");
            scanf("%f", &sellingPrice);
            printf("Enter the Loss Rate r%%  : ");
            scanf("%f", &lossRate);
            result = sellingPrice / (1 - lossRate / 100);
            printf("The Purchase Price is : %.2f\n", result);
            break;

        default:
            printf("Invalid choice! Please enter 1, 2, 3, 4, 5, 6, or 7.\n");
            continue;
        }//Switch Ends
    }// While Ends

    return 0;
}//main Ends