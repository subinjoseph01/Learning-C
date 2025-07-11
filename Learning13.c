//   FUNCTION PROTOTYPE
// Function prototype:

// function declaration without a body before main function. ensures that calls to function
// are made with correct arguments

// imp notes :

// 1) MANY C COMPLIERS DOT not chcek for parameter matching

// missing arguments will result you in respected behaviour

// 2) The function prototype curses the complier to flag an erroe if the arguments are missing

// advantages :
// 1)easy to navigate a program with main function at the up
// 2) Helps with debugging
// 3) commonly used in header files

#include <stdio.h>

int sub(int a, int b);

int main()

{
    int subresult = sub(12,5 );

    printf("%d", subresult);
}

int sub( int a , int b)

{

int result = a-b;
return result;
}