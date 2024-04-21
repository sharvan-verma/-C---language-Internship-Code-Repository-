#include <stdio.h>
#include <math.h>
int main()
{
    double num1, num2;
    char operator;
    double result;

    printf("Yo, gimme a number: ");
    scanf("%lf", &num1);
     printf("Another one number , bro:  ");
    scanf("%lf", &num2);

    printf("Now, pick the operation (+, -, *, /, %% : )");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0)
        {
            printf("dude, you can't divide by zer!\n");
            return 1; // it exit from program
        }
        result = num1 + num2;
        break;
    case '%':
        result = fmod(num1, num2);//fmod because we can perform % operation on double , its take only integer num. to perfrom
        break;
    default:
        printf("Oops, operation is not on my list!\n");
       return 1;
    }

    printf("Here's the result, my friend: %.2lf\n",result);
}