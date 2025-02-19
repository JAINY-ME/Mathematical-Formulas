// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num;
    float  a, b, result;
    //Kilometres to Miles Converter and Miles to Kilometers Converter
   printf("Enter the number 1 to convert Kilometres to Miles and number 2 to convert Miles to Kilometers : ");
   scanf("%d", &num);
   if(num == 1){
       printf("\nEnter the number in km : ");
       scanf("%f", &a);
       result = a * 5/8 ;
       printf("\nThe %.2fKm in Miles is : %.2f",a, result);
       
   }else if(num == 2){
       printf("\nEnter the number in Miles : ");
       scanf("%f", &b);
       result = b * 8/5 ;
       printf("\nThe %.2fMiles in Km is : %.2f",b, result);
       
   }else{
       printf("Enter the Correct number 1 or 2");
   }
    
    return 0;
}