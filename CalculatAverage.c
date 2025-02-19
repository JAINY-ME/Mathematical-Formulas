// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int num, i, temp, result;
    int A[100];
    // Calculat the Average of the numbers
    printf("Enter the size of Total Numbers : ");
    scanf("%d", &num);
    temp = 0;
    for (i = 1; i <= num; i++)
    {
        printf("Enter the number %d : ", i);
        scanf("%d", &A[i]);
        temp += A[i];
    }

    result = temp / num;
    printf("\nThe Average of the all number is : %d", result);

    return 0;
}
