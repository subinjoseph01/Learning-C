#include <stdio.h>

void cora(int *a)

{

    printf("The address %p \n", a);
    printf("The given value is %d", *a);
}

int main()

{

    int aye;

    printf("please enter the value ");
    scanf("%d",&aye);

    int *ella = &aye;
    cora(ella);
}

// here we have done 
// using the user input we took a value and find the value address and printed value 