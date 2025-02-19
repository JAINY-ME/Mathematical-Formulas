// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Write C code here
    int choice;
    float length, width, height, side, result;
    printf("Calculation in Cube and Cuboid");
    while(1){
        printf("\n\n-----Choose what to calculate-----\n");
        printf("\n0. Exit.");
        printf("\n1. Volume of a Cuboid.");
        printf("\n2. Surface area of a Cuboid.");
        printf("\n3. Diagonal of a Cuboid.");
        printf("\n4. Volume of a Cube.");
        printf("\n5. Surface area of a Cube.");
        printf("\n6. Diagonal of a Cube.");
        printf("\nEnter your choice ( 0/ 1/ 2/ 3/ 4/ 5/ 6 ) : ");
        scanf("%d", &choice);
        
        switch(choice){
            case 0 : exit(0);
                    break;
            case 1 :printf("\nEnter the length of a cuboid : ");
            scanf("%f", &length);
            printf("Enter the Width of a cuboid : ");
            scanf("%f", &width);
            printf("Enter the Height of a cuboid : ");
            scanf("%f", &height);
            result = length * width * height;
            printf("volume of a Cuboid is : %.2f", result);
            break;
            case 2 : printf("\nEnter the length of a cuboid : ");
            scanf("%f", &length);
            printf("Enter the Width of a cuboid : ");
            scanf("%f", &width);
            printf("Enter the Height of a cuboid : ");
            scanf("%f", &height);
            result = 2 * ((length * width) + ( width * height) + (height * length));
            printf("\nSurface area of a Cuboid is : %.2f", result);
            break;
            case 3 : printf("\nEnter the length of a cuboid : ");
            scanf("%f", &length);
            printf("Enter the Width of a cuboid : ");
            scanf("%f", &width);
            printf("Enter the Height of a cuboid : ");
            scanf("%f", &height);
            result = sqrt(pow(length, 2) + pow(width, 2) + pow(height, 2));
            printf("\nDiagonal of a Cuboid is : %.2f", result);
            break;
            
            case 4 : printf("\nEnter the side of a Cube : ");
            scanf("%f", &side);
            result = pow(side, 3);
            printf("\nvolume of a Cube is : %.2f", result);
            break;
            
            case 5 : printf("\nEnter the side of a Cube : ");
            scanf("%f", &side);
            result = 6 * pow(side, 2);
            printf("\nSurface area of a Cube is : %.2f", result);
            break;
            
            case 6 : printf("\nEnter the side of a Cube : ");
            scanf("%f", &side);
            result = sqrt(3) * side;
            printf("\nDiagonal of a Cube is : %.2f", result);
            break;
            
            default: 
                printf("Invalid choice! Please enter 0, 1, 2, 3, 4, 5, or 6.\n");
                continue;
            
        }
        
            }

    return 0;
}