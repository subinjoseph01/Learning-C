#include <stdio.h>
#include <string.h>

int main()
{
    char operator;
    double num1, num2, result;

    // Ask for user input
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to catch any previous newline

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform calculation based on operator
    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("Result: %lf\n", result);
        break;
    case '-':
        result = num1 - num2;
        printf("Result: %lf\n", result);
        break;
    case '*':
        result = num1 * num2;
        printf("Result: %lf\n", result);
        break;
    case '/':

        result = num1 / num2;
        printf("Result: %lf\n", result);
        break;

    default:
        printf("Error: Invalid operator.\n");
    }

    return 0;
}


// how to create a calculotr using additiion , substraction , multipication , division
// using switch method 
