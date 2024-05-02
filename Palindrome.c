#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[100];
    int length, isPalindrome = 1;

    printf("Yo! Gimme a word or phrase: ");
    fgets(input, sizeof(input), stdin);

 
    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0';
    }

    length = strlen(input);


    for (int i = 0; i < length; i++) {
        input[i] = tolower(input[i]);
    }

    // Check if the input is a palindrome
    for (int i = 0; i < length / 2; i++) {
        if (input[i] != input[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("Yep, '%s' is a palindrome!\n", input);
    } else {
        printf("Nah, '%s' ain't a palindrome.\n", input);
    }

    return 0;
}
