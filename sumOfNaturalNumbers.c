// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num, result, temp;
    //Code for sum of all even netural numbers
    printf("Programe to calculate the sum of natural numbers till stoping number\n");
    printf("Enter the stoping number : ");
    scanf("%d", &num);
    
    for(int i = 1; i <= num; i++){
        printf(" %d +", i);
    }
    
    temp = num + 1;
    result = num * temp / 2;
    
    printf("\nThe sum of all even numbers is : %d", result);
    return 0;
}