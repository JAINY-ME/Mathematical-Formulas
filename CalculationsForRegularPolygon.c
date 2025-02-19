// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Write C code here
    int choice;
    float side,a, h,  result ;
    printf("Calculation in a Perpendicular\n");
    while(1){
        printf("\n\n-----Choose what to calculate-----\n");
        printf("0. Exit.\n");
        printf("1. Perpendicular distance from the center to a side of a regular polygon.\n");
        printf("2. Area of a regular polygon with ( n ) sides.\n");
        printf("3. Perimeter of a regular polygon with ( n ) sides.\n");
        printf("\nEnter your choice ( 0/ 1/ 2/ 3 ) : ");
        scanf("%d", &choice);
        switch(choice){
            case 0: exit (0);
                    break;
            case 1: 
                    printf("Enter the side of regular polygon : ");
                    scanf("%f", &side);
                    result = ((2 * side) - 4 )/ side * 90;
                    printf("The Perpendicular distance from the center to a side of a regular polygon is : %.2f", result);
                    break;
            case 2:printf("Enter the number of sides of the regular polygon : ");
                    scanf("%f", &side);
                    printf("Enter the length of one side of the polygon : ");
                    scanf("%f", &a);
                    printf("Enter the apothem of the polygon, which is the perpendicular distance from the center to a side : ");
                    scanf("%f", &h);
                    result = (side * a * h) / 2;
                    printf("The Area of a regular polygon is : %.2f", result);
                    break;
            case 3: printf("Enter the number of sides of the regular polygon : ");
                    scanf("%f", &side);
                    printf("Enter The length of one side of the polygon : ");
                    scanf("%f", &a);
                    result = side * a;
                    printf("The Perimeter of a regular polygon is : %.2f", result);
                    break;
            default : printf("Invalid choice! Please enter 0, 1, 2, or 3.\n");
                        continue;
        }
        
    }

    return 0;
}