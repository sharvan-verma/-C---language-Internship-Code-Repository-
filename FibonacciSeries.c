#include <stdio.h>

int main()
{
    int numberTerms;

    printf("Terms of the Fibonacci series do you want: ");
    scanf("%d", &numberTerms);

    printf("Fibonacci series:\n");


    int a = 0, b = 1;
    printf("%d, %d", a, b); // print the value of a  and b.

    for (int i = 2; i < numberTerms; i++)
    {
        int nextTerm = a + b;
        printf(", %d", nextTerm); 
        a = b;
        b = nextTerm;
    }

    printf("\n"); 
    
    return 0;
}
