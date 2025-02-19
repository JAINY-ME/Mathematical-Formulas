// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num;
    //The Game of Even and Odd
    
    printf("The Game of Even and Odd\n");
    printf("\nStep 1: ");
    printf("Imagine two number in the range of 1-10 and put first number your Right hand and the second number in your Left hand. \n");
    printf("\nStep 2: ");
    printf("Now multiple 3 on Right hand number and 2 on Left hand number.\n");
    printf("\nStep 3: ");
    printf("Now Add both the numbers you multipled \n");
    printf("\nEnter the Sum of both number :");
    scanf("%d", &num);
    
    if(num % 2 == 0){
        printf("The number in your Right hand is an Even number.");
    }else{
        printf("The number in your Right hand is an Odd number.");
    }
    
    
    
    return 0;
}