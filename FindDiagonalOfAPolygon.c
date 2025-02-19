#include <stdio.h>

int main()
{
    int num, result;

    // Code to find number  of diagonals of polygon

    printf("Find the number of Diagonals in a Polygon\n ");
    printf("Enter the number of sides : ");
    scanf("%d", &num);
    result = num * (num - 3) / 2;

    printf("The number of Diagonals of a Polygon is : %d", result);

    return 0;
}
