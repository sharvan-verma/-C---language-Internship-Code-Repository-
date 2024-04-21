#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int length, i;

    printf("Enter a string: ");
    scanf("%s", str);

    // Calculate string length
    length = strlen(str);

    // Reversing logic of a string
    for (i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    printf("Reversed string: %s", str);

    return 0;
}
