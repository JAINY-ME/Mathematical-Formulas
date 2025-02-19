#include <stdio.h>
#include <math.h>  // for pow()

int main() {
    int choice;
    float P, A, R, T, CI;

    // Menu for different calculations
    printf("Compound Interest Calculator\n");
    printf("Choose what to calculate:\n");
    printf("1. Calculate Compound Interest (CI = A - P)\n");
    printf("2. Calculate Amount (A = P(1 + R / 100)^T)\n");
    printf("3. Calculate Compound Interest (CI = P(1 + R / 100)^T - P)\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:  // Calculate Compound Interest (CI = A - P)
            printf("\nEnter the Amount (A): ");
            scanf("%f", &A);
            printf("Enter the Principal (P): ");
            scanf("%f", &P);
            CI = A - P;
            printf("The Compound Interest is: %.2f\n", CI);
            break;

        case 2:  // Calculate Amount (A = P(1 + R / 100)^T)
            printf("\nEnter the Principal Amount (P): ");
            scanf("%f", &P);
            printf("Enter the Time (in years, T): ");
            scanf("%f", &T);
            printf("Enter the Rate (R, in %%): ");
            scanf("%f", &R);
            A = P * pow((1 + R / 100), T);
            printf("The Amount (A) is: %.2f\n", A);
            break;

        case 3:  // Calculate Compound Interest (CI = P(1 + R / 100)^T - P)
            printf("\nEnter the Principal Amount (P): ");
            scanf("%f", &P);
            printf("Enter the Time (in years, T): ");
            scanf("%f", &T);
            printf("Enter the Rate (R, in %%): ");
            scanf("%f", &R);
            A = P * pow((1 + R / 100), T);
            CI = A - P;
            printf("The Compound Interest (CI) is: %.2f\n", CI);
            break;

        default:
            printf("Invalid choice! Please enter 1, 2, or 3.\n");
            break;
    }

    return 0;
}
