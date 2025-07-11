// nested for loop
#include <stdio.h>

int main()

{

    char result;

    int f;
    int g;

    printf("Enter a value : ");
    scanf("%c", &result);

    printf("Enter the row value :");
    scanf("%d", &f);

    printf("Enter the col value : ");
    scanf("%d", &g);

    for (int r = 1; r < f; r++)
    {

        for (int k = 1; k < g; k++)
        {
            printf("%c", result);
        }
        printf("\n");
    }
}



// Notes :

// 1) Here according to the first loop it indicates how many numbers will print  Eg=1,2,3 etc
// 2) here in second loop it decide how many time will it print Eg= 123, 123, 123

// 3) The  loop doesn't stop unless the condiotion become false

// 4) meaning of r ++  is r + 1