// what is pointers and its defenetion !

// pointer is like a variable refrefence that holds a meormy address 
// to another variable , array etc...
// some task are perfomed easily with pointers 


// Advantages of pointers :

// Less timing program execution
// working on the orginal variable 
// searching and storing large data very easily 
// returing more than one values from functions 

#include <stdio.h>

int main ()

{

int raj = 5;

int *socky = &raj;
                        // Here we pass the value to store the variable to another and find 
                        // the address of the variable 

printf("The value of variable is %p \n",socky);
printf("The value of raj is : %d",*socky);



}