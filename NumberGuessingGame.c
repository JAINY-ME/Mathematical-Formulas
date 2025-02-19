#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num;
    srand(time(0));             // Seed the random number generator
    int ran = 1 + rand() % 100; // Generate number between 1 and 100

    printf("-----Number Guessing Game-----\n");

    while (1)
    {
        printf("\n-----Guess the number between 1 to 100-----\n");
        printf("Enter the Number here: ");
        scanf("%d", &num);

        if (num == ran)
        {
            printf("🎉 Great! You entered the right number.\n");
            break; // Exit the loop
        }
        else if (num > ran)
        {
            printf("The number is Too High! Guess again...\n");
        }
        else if (num < ran)
        {
            printf("The number is Too Low! Guess again...\n");
        }
    }

    printf("Game Over. Thanks for playing!\n");
    return 0;
}
