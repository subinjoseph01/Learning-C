#include <stdio.h>
#include <string.h>

void pepsi(int a, int b)
{

    int ram = (a > b) ? a : b;

    printf("%d is the highest value here ", ram);
}

void annachi(int c)
{
    int lal = c;

    printf(" \n my age is %d ", lal);
}

void key(char joy[20])
{
    char vijay[20];
    strcpy(vijay, joy);
    printf("\n my name is %s", vijay);
}

int main()

{
    int a;
    int b;
    int c;
    char joy[20];

    printf(" Enter the value of A :");
    scanf("%d", &a);

    printf(" Enter the value of B :");
    scanf("%d", &b);
    getchar();

    printf("Enter your age : ");
    scanf("%d", &c);
    getchar();

    printf("my name is :");
    fgets(joy, 20, stdin);

    pepsi(a, b);
    annachi(c);
    key(joy);

    return 0;
}


// here we write using the functions method find which is grater and in given both values
// by user input method also using ternary operator in it 