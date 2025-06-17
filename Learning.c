#include <stdio.h>

float add(float a, float b)
{
    float result = a+b;
    return result;
}

float substract(float a, float b)
{
    float result = a-b;
    return result;
}
float multiply(float a, float b)
{
    float result = a*b;
    return result;
}
float division(float a, float b)
{
     float result = a/b;
    return result;
}

float toget()
{

    float num1;
    float num2;
    float result;
    char hey;

    printf(" Pick one +, - , * , / : ");
    scanf("%c", &hey);

    printf("Enter a value A = ");
    scanf("%f", &num1);

    printf("Enter a value B = ");
    scanf("%f", &num2);

    switch (hey)
    {
    case '+':
        result = add(num1, num2);
        break;

    case '-':
        result = substract(num1, num2);
        break;

    case '*':
        result = multiply(num1, num2);
        break;

    case '/':
        result = division(num1, num2);
        break;
    default:
        printf("Enter a proper value MR");
        return 0;
    }
    return result;
}

int main()
{

    float finalAns= toget();
    printf("The answer is %f",finalAns);
}