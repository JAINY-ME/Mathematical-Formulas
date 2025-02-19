// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num, result, temp;
    //Code for sum of all even netural numbers
    printf("Programe to calculate the sum of Odd numbers till stoping number\n");
    printf("Enter the stoping number : ");
    scanf("%d", &num);
    
    for(int i = 1; i <= num; i++){
        if(i % 2 != 0)
        printf(" %d +", i);
    }
    
    temp = num + 1;
    result = temp / 2 ;
    result *= result;
    
    printf("\nThe sum of all odd numbers is : %d", result);
    return 0;
}