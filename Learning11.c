// Do while loop concept

#include <stdio.h>

int main()

{
    int num = 0;

    do
    {
        printf("Enter a positive number ");
        scanf("%d", &num);

        printf("The number is %d \n", num);
    }

    while (num < 0);
   
    
}

// Explanation : Here first the code in side the ao curly bracket execute first later
// it will check the given condition beloew which is in the while 

// so here while and do while has slight different 

// while check the condition first then exeute the code 
// in do while forst execute the code then chcek the condiotion 

// HERE : for and while are pretty similar 

// it's just the condiotion positioning is different 

// in for - cindition comes inside the bracket as (vaiable , condition , operation)
// in while - only condition comes inside the bracket others out side 
// in do while - condition comes in last in while and rest in out side