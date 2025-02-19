// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num, result, temp, i;
    //Code for sum of a Table numbers
    printf("Programe to calculate the sum of a Table  \n");
    printf("Enter the stoping number : ");
    scanf("%d", &num);
    
    i = 0;
    temp = num * 10;
    while(i < temp){
        i = i + num;
        printf("%d + ", i);
    }
    
    
    result = 55 * num ;
    
    
    printf("\nThe sum of all Table numbers is : %d", result);
    return 0;
}