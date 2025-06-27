#include <stdio.h>

int main()
{
    int num = 0;
    int user = 0;

    printf("Enter a unit you want : ");
    scanf("%d",&user);

    for (int r = 1; r <= 10; r++)
    {
        num = num + user;

        printf("%d x %d = %d \n", r, user, num);
    }

    return 0;
}


// using the user input we have  executed the table 

// using for loop method