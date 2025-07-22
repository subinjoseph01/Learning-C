#include <stdio.h>

void buddy(int *rot, int *jog)
{

    printf("My address %p\n \t", rot );
    printf("the number %d \n \n" , *rot);



     printf("My address %p\n \t ", jog );
    printf("the number %d" , *jog);
    

 
}

int main()

{

    int r = 12;
    int *rot = &r; 

    int j = 13;
    int *jog = &j;

    buddy(rot , jog);

    return 0;
}


// Here we have done fucntion using pointers 
// for  pointers note : reference check Learning18.c