#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    system("cls");
    printf("\n\n\t\t\t\t\t\t\t------Calculation In a right circular cylinder------\n\n");// heading

    int choice;
    float result, radius, height, bigRadius;
    // Creating while loop which is true and reapet again and again unless we exit the code
    while(1){

        printf("\n-----Choose What To Calculate------\n");
        printf("\n0. Exit.");
        printf("\n1. Curved surface area of the cylinder.");
        printf("\n2. Complete surface area of the cylinder.");
        printf("\n3. Volume of the cylinder.");
        printf("\n4. Volume of hollow cylinder.");
        printf("\n\nEnter your choice (0/ 1/ 2/ 3/ or 4) : ");
        scanf("%d", &choice);

        switch(choice){

            case 0 :exit(0);
                    break;
            case 1 :printf("Enter the radius : ");
                    scanf("%f", &radius);
                    printf("Enter the height : ");
                    scanf("%f", &height);
                    result = 2 * M_PI * radius * height;
                    printf("\nThe Curved surface area of the cylinder is : %.2f", result);
                    break;
            case 2 :printf("Enter the radius : ");
                    scanf("%f", &radius);
                    printf("Enter the height : ");
                    scanf("%f", &height);
                    result = 2 * M_PI * radius *(radius + height);
                    printf("\nThe Complete surface area of the cylinder is : %.2f", result);
                    break;
            case 3 :printf("Enter the radius : ");
                    scanf("%f", &radius);
                    printf("Enter the height : ");
                    scanf("%f", &height);
                    result = M_PI * pow(radius, 2) * height;
                    printf("\nThe Volume of the cylinder : %.2f", result);
                    break;
            case 4 :printf("Enter the radius small circle : ");
                    scanf("%f", &radius);
                    printf("Enter the radius Big circle : ");
                    scanf("%f", &bigRadius);
                    printf("Enter the height : ");
                    scanf("%f", &height);
                    result = M_PI * height *(bigRadius + radius) * (bigRadius - radius);
                    printf("\nThe Volume of hollow cylinder is : %.2f", result);
                    break;
            
            default :printf("Invalid Choice! Please enter (0/ 1/ 2/ 3/ or 4 )");
                    continue;

        }
    }

return 0;
}