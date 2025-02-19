#include <stdio.h>

int main() {
    int choice;
    float P, I, A, R, T, SI;

    // Menu for different calculations
    printf("Simple Interest Calculator\n");
    printf("Choose what to calculate:\n");
    printf("1. Calculate Principal (P = A - I)\n");
    printf("2. Calculate Interest (I = (P * T * R) / 100)\n");
    printf("3. Calculate Principal using Interest, Rate, and Time (P = (I * 100) / (R * T))\n");
    printf("4. Calculate Rate (R = (I * 100) / (P * T))\n");
    printf("5. Calculate Time (T = (I * 100) / (P * R))\n");
    printf("6. Calculate Amount (A = P + SI)\n");
    printf("Enter your choice (1/2/3/4/5/6): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:  // Calculate Principal (P = A - I)
            printf("\nEnter the Amount (A): ");
            scanf("%f", &A);
            printf("Enter the Interest (I): ");
            scanf("%f", &I);
            P = A - I;
            printf("The Principal Amount is: %.2f\n", P);
            break;

        case 2:  // Calculate Interest (I = (P * T * R) / 100)
            printf("\nEnter the Principal Amount (P): ");
            scanf("%f", &P);
            printf("Enter the Time (in years, T): ");
            scanf("%f", &T);
            printf("Enter the Rate (R, in %%): ");
            scanf("%f", &R);
            I = (P * T * R) / 100;
            printf("The Interest (I) is: %.2f\n", I);
            break;

        case 3:  // Calculate Principal using Interest, Rate, and Time (P = (I * 100) / (R * T))
            printf("\nEnter the Interest (I): ");
            scanf("%f", &I);
            printf("Enter the Time (in years, T): ");
            scanf("%f", &T);
            printf("Enter the Rate (R, in %%): ");
            scanf("%f", &R);
            P = (I * 100) / (R * T);
            printf("The Principal Amount is: %.2f\n", P);
            break;

        case 4:  // Calculate Rate (R = (I * 100) / (P * T))
            printf("\nEnter the Interest (I): ");
            scanf("%f", &I);
            printf("Enter the Time (in years, T): ");
            scanf("%f", &T);
            printf("Enter the Principal (P): ");
            scanf("%f", &P);
            R = (I * 100) / (P * T);
            printf("The Rate (R) is: %.2f%%\n", R);
            break;

        case 5:  // Calculate Time (T = (I * 100) / (P * R))
            printf("\nEnter the Interest (I): ");
            scanf("%f", &I);
            printf("Enter the Rate (R, in %%): ");
            scanf("%f", &R);
            printf("Enter the Principal (P): ");
            scanf("%f", &P);
            T = (I * 100) / (P * R);
            printf("The Time (T) is: %.2f years\n", T);
            break;

        case 6:  // Calculate Amount (A = P + SI)
            printf("\nEnter the Principal (P): ");
            scanf("%f", &P);
            printf("Enter the Simple Interest (SI): ");
            scanf("%f", &SI);
            A = P + SI;
            printf("The Total Amount (A) is: %.2f\n", A);
            break;

        default:
            printf("Invalid choice! Please enter 1, 2, 3, 4, 5, or 6.\n");
            break;
    }

    return 0;
}



