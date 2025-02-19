#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double myFactorial(int num);
void sinFunction(double x);
void cosFunction(double x);
void tanFunction(double x);
void cotFunction(double x);
void secFunction(double x);
void cosecFunction(double x);

int main() {
    int choice;
    double x;

    printf("Find the value of sin, cos, tan, cot, sec, cosec.\n");
    while (1) {
        printf("\n\n\t\t\t\t\t-----~~~~~Choose what to calculate~~~~~-----\n\n");
        printf("\n0. Exit.");
        printf("\n1. Calculate the value of sin.");
        printf("\n2. Calculate the value of cos.");
        printf("\n3. Calculate the value of tan.");
        printf("\n4. Calculate the value of cot.");
        printf("\n5. Calculate the value of sec.");
        printf("\n6. Calculate the value of cosec.");
        printf("\n\tEnter your choice ( 0/1/2/3/4/5/6) : ");
        scanf("%d", &choice);

        switch (choice) {
            case 0:
                exit(0);

            case 1:
                printf("\nEnter the value of θ (theta) in degrees: ");
                scanf("%lf", &x);
                if (x == 0) {
                    printf("The value of sin(%lf) is : 0\n", x);
                } else if (x == 30) {
                    printf("The value of sin(%lf) is : 0.5\n", x);
                } else if (x == 45) {
                    printf("The value of sin(%lf) is : 0.7071\n", x);
                } else if (x == 60) {
                    printf("The value of sin(%lf) is : 0.8660\n", x);
                } else if (x == 90) {
                    printf("The value of sin(%lf) is : 1.0\n", x);
                } else {
                    sinFunction(x);
                }
                break;

            case 2:
                printf("\nEnter the value of θ (theta) in degrees: ");
                scanf("%lf", &x);
                if (x == 0) {
                    printf("The value of cos(%lf) is : 1.0\n", x);
                } else if (x == 30) {
                    printf("The value of cos(%lf) is : 0.8660\n", x);
                } else if (x == 45) {
                    printf("The value of cos(%lf) is : 0.7071\n", x);
                } else if (x == 60) {
                    printf("The value of cos(%lf) is : 0.5\n", x);
                } else if (x == 90) {
                    printf("The value of cos(%lf) is : 0.0\n", x);
                }else{
                    cosFunction(x);
                }
                break;

            case 3:
                printf("\nEnter the value of θ (theta) in degrees: ");
                scanf("%lf", &x);
                if (x == 0) {
                    printf("The value of tan(%lf) is : 0.0\n", x);
                } else if (x == 30) {
                    printf("The value of tan(%lf) is : 0.5774\n", x);
                } else if (x == 45) {
                    printf("The value of tan(%lf) is : 1.0\n", x);
                } else if (x == 60) {
                    printf("The value of tan(%lf) is : 1.7321\n", x);
                } else if (x == 90) {
                    printf("The value of tan(%lf) is : Infinite\n", x);
                }else{
                    tanFunction(x);
                }
                break;

            case 4 : printf("\nEnter the value of θ (theta) : ");
                    scanf("%d", &x);
                    if(x == 0)
                    {
                        printf("The value of cot(%lf) is : Infinite", x );
                    }else if(x == 30)
                    {
                        printf("The value of cot(%lf) is : √3", x );
                    }else if(x == 45)
                    {
                        printf("The value of cot(%lf) is : %d", x , 1);
                    }else if(x == 60)
                    {
                        printf("The value of cot(%lf) is : 1/√3", x );
                    }else if(x == 90)
                    {
                        printf("The value of cot(%lf) is : %d", x , 0);
                    }else{
                        cotFunction(x);
                    }
                    break;
            case 5 : printf("\nEnter the value of θ (theta) : ");
                    scanf("%d", &x);
                    if(x == 0)
                    {
                        printf("The value of sec(%lf) is : %d", x , 1);
                    }else if(x == 30)
                    {
                        printf("The value of sec(%lf) is : 2/√3 ", x );
                    }else if(x == 45)
                    {
                        printf("The value of sec(%lf) is : √2", x );
                    }else if(x == 60)
                    {
                        printf("The value of sec(%lf) is : 2", x );
                    }else if(x == 90)
                    {
                        printf("The value of sec(%lf) is : Infinite", x );
                    }else{
                        secFunction(x);
                    }
                    break;
            case 6 : printf("\nEnter the value of θ (theta) : ");
                    scanf("%d", &x);
                    if(x == 0)
                    {
                        printf("The value of cosec(%lf) is : Infinite", x );
                    }else if(x == 30)
                    {
                        printf("The value of cosec(%lf) is : 2", x );
                    }else if(x == 45)
                    {
                        printf("The value of cosec(%lf) is : √2", x );
                    }else if(x == 60)
                    {
                        printf("The value of cosec(%lf) is : 2/√3", x );
                    }else if(x == 90)
                    {
                        printf("The value of cosec(%lf) is : %d", x , 1);
                    }else{
                        cosecFunction(x);
                    }
                    break;
        
            
            default:
                printf("Invalid Choice! Please enter 0, 1, 2, 3, 4, 5, or 6\n");
                continue;
        }
    }

    return 0;
}

double myFactorial(int num) {
    if (num == 0 || num == 1) {
        return 1.0;
    }
    return num * myFactorial(num - 1);
}

void sinFunction(double x) {
    x = x * M_PI / 180.0;  // Convert to radians
    double result = x - (pow(x, 3) / myFactorial(3)) + (pow(x, 5) / myFactorial(5)) - (pow(x, 7) / myFactorial(7)) + (pow(x, 9) / myFactorial(9));
    printf("The value of sin(%.2f radians) is : %.5f\n", x, result);
}

void cosFunction(double x)
{
    x = x * M_PI / 180.0;
    double result = 1 - (pow(x, 2) / myFactorial(2)) + (pow(x, 4) / myFactorial(4)) - (pow(x, 6) / myFactorial(6)) + (pow(x, 8) / myFactorial(8));
    printf("The value of cos(%.2f radians) is : %.5f\n", x, result);
}
void tanFunction(double x)
{
    x = x * M_PI / 180.0;
    double result = x + (pow(x, 3) / 3) + (2 * pow(x, 5) / 15) + (17 *pow(x, 7) / 315);
    printf("The value of tan(%.2f radians) is : %.5f\n", x, result);
}
void cotFunction(double x)
{
    x = x * M_PI / 180.0;
    double result = (1 / x) - (x / 3) - (pow(x,3)/ 45) - (2 * pow(x,5) / 945);
    printf("The value of cot(%.2f radians) is : %.5f\n", x, result);
}
void secFunction(double x)
{
    x = x * M_PI / 180.0;
    double result = 1 + (pow(x,2) / 2) + (5 * pow(x,4) / 24) + (61 * pow(x,6) / 720);
    printf("The value of sec(%.2f radians) is : %.5f\n", x, result);
}
void cosecFunction(double x)
{
    x = x * M_PI / 180.0;
    double result = (1 / x) + (x / 6) + (7 * pow(x,3) / 360) + (31 * pow(x,5) / 15120);
    printf("The value of cosec(%.2f radians) is : %.5f\n", x, result);
}