#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];

    printf("Enter Your name : ");
    fgets(name, 50, stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0)

    {
        printf("please Enter your name :");
        fgets(name, 50, stdin);

        name[strlen(name) - 1] = '\0';
    }

    printf("your name is  %s", name);
}


// strlen = string length 
// strlen : is knnow to find the length of the chrater name 

// eg : john = 4 charter 

// index number of strlen =  count strarts with zeo to its maxium 0,1,2,3,4 etc

// john = 0,1,2,3