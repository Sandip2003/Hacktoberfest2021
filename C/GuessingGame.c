#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;

    // Seed the random number generator   
 with the current time
    srand(time(NULL));

    // Generate a random number between 1 and 100
    secretNumber   
 = rand() % 100 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I've chosen a random number between 1 and 100. Can you guess it?\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < secretNumber) {
            printf("Your guess is too low.\n");
        } else if (guess > secretNumber) {
            printf("Your guess is too high.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != secretNumber);

    return 0;
}
