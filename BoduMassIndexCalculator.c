#include <stdio.h>
#include <math.h>

int main() {
    float weight, height, result;

    printf("-----Body Mass Index Calculator-----\n");
    printf("\nEnter your Weight (in Kg): ");
    scanf("%f", &weight);
    printf("\nEnter your Height (in Feet): ");
    scanf("%f", &height);

    if (weight <= 0 || height <= 0) {
        printf("Invalid input. Weight and height must be positive values.\n");
        return 1;
    }

    result = weight / (pow(height, 2) * pow(0.3048, 2));

    printf("\nYour Body Mass Index is: %.2f", result);

    // Display BMI category
    if (result < 18.5)
        printf("\nYou are Underweight.");
    else if (result >= 18.5 && result < 24.9)
        printf("\nYou have Normal weight.");
    else if (result >= 25 && result < 29.9)
        printf("\nYou are Overweight.");
    else
        printf("\nYou are Obese.");

    return 0;
}
