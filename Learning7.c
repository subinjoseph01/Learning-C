#include <stdio.h>

int main()

{

    char hey[50];
    printf("WHAT'S YOUR NAME LOVE : ");
    fgets(hey, 50, stdin);

    int num = 1;

    while (num <=10)
    {
        printf("Your name is %s\n", hey);
        num++;
    }


    return 0;
}


// the concept is it has to print 10 times  aname name via user input 


// //   
// just for understanding 
       


// [ char name[25] = "John";

// //     name[1] = 'a';               just an exapmle how to pick
                                    //   partucular name and exchange it
// //     printf("%s", name);
//     return 0;    ]
// }