#include <stdio.h>

int main()
{
int a;
int b;


printf("Enter a value of A ");
scanf("%d",&a);

printf("Enter a value of B ");
scanf("%d", &b);

int roy = (a>b)? a:b;
printf("%d is the higest value here", roy);

return 0;


}

//Here i have written in 16th line after the equalto is called ternary  operator 
// also using user input find which is the greater number in here 