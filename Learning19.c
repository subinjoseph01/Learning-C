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