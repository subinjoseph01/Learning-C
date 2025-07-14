#include <stdio.h>

int main()

{

    int numbers[2][3] =
        {{88, 55, 66},
         {22, 99, 11}};

    for (int r = 0; r <= 1; r++)
    {
        for (int k = 0; k <= 2; k++)
        {
            printf("%d", numbers[r][k]);
           printf("\n");
        }
    }
    return 0;
}