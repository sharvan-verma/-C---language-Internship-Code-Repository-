#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char *choices[] = {"Rock", "Paper", "Scissors"};
    char *result[] = {"It's a draw!", "You win!", "Computer wins!"};
    int yourChoice, computerChoice;

    srand(time(NULL));

    printf("Let's play Rock-Paper-Scissors!\n");
    printf("Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors): ");
    scanf("%d", &yourChoice);

    if (yourChoice < 0 || yourChoice > 2)
    {
        printf("Try again you choose falsy number.\n");
        return 1;
    }

    computerChoice = rand() % 3;

    printf("You chose: %s\n", choices[yourChoice]);
    printf("Computer chose: %s\n", choices[computerChoice]);

    int diff = (yourChoice - computerChoice + 3) % 3;
    printf("%s\n", result[diff]);

    return 0;
}
