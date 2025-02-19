// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num, result, temp;
    //Code for sum of all netural numbers
    printf("Programe to calculate the sum of all even numbers till stoping number\n");
    printf("Enter the stoping number : ");
    scanf("%d", &num);
    
    for(int i = 2; i <= num; i++){
        if(i % 2 == 0){
            printf(" %d +", i);
        }
        
    }
    
    temp = num + 2;
    result = num * temp / 4;
    
    printf("\nThe sum of all even %d numbers is : %d", num, result);
    return 0;
}