#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number_to_guess, guess;
    
  
    srand(time(NULL));
    
    // Generateing a random number from1 and 100
    number_to_guess = rand() % 100 + 1;
    
    printf("Your's Welcome Guessing Game!\n");
    
    printf(" chosen a number between 1 and 100. Try to guess it!\n");
    

    do {
   
        printf("Enter your guess: ");
        scanf("%d", &guess);
        
   
        if (guess < number_to_guess)
            printf("Higher!\n");
        else if (guess > number_to_guess)
            printf("Lower!\n");
        else
            printf("Congratulations! You guessed the correct number: %d\n", number_to_guess);
    } while (guess != number_to_guess);
    
    return 0;
}
