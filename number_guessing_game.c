#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguess = 0;
    srand(time(0));
    number = rand() % 100 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have picked a number between 1 and 100. Can you guess it?\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        nguess++; 

        if (guess < number)
        {
            printf("Higher number please!\n");
        }
        else if (guess > number)
        {
            printf("Lower number please!\n");
        }
        else
        {
            printf("Congratulations, you guessed it in %d attempts!\n", nguess);
        }

    } while (guess != number);

    return 0;
}
