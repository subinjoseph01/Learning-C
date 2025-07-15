#include <stdio.h>

void zara(int *a, int *b)

{
    printf("%d",*a+*b);
}

int main()

{
    int lora = 5;
    int felix = 5;

    printf("Please enter a value :");
    scanf("%d",&lora);

    printf("Please enter a value :");
    scanf("%d",&felix);


    int *ara = &lora;
    int *clara = &felix;

    zara(ara,clara);
}


// Here we have done using user input
// and we have added the number in other fuction 