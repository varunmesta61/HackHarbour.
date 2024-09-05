#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumber(int min, int max) 
{
    return min + rand() % (max - min + 1);
}

int main() {
    int numberToGuess, guess, attempts = 0;
    const int maxAttempts = 6;  // Maximum number of attempts allowed
    srand(time(0));  // Seed the random number generator
    numberToGuess = getRandomNumber(1, 100);    // Generate a random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("You have %d attempts to guess the number between 1 and 100.\n", maxAttempts);

    do 
    {
        printf("Enter your guess (1-100): ");
        scanf("%d", &guess);
        attempts++;

        if (guess < numberToGuess) 
        {
            printf("Too low!\n");
        } 
        else if (guess > numberToGuess) 
        {
            printf("Too high!\n");
        } 
        else 
        {
            printf("Congratulations! You guessed the number %d in %d attempts.\n", numberToGuess, attempts);
            break;  
        }

        if (attempts >= maxAttempts) 
        {
            printf("Sorry, you've used all your attempts. The number was %d.\n", numberToGuess);
            break;  
        }

    } while (1);    

    return 0;
}