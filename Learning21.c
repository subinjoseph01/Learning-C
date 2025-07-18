                              //Title :  structure .

//     A struct in C is a special container that lets you group different types of variables
//      together under one name.

//     Each item inside a struct can have a different data type — like a
//     number(int),
//     a word(char[]), or a decimal(float).

//                     It’s kind of like a box that holds :

//     One toy car(int),

//     One sticker book(char[]),

//     And one juice box(float).

#include <stdio.h>


struct zara
{
int lara;
char rey[70];
double pinto;


};

int main()
{
struct zara zayan ;


printf("Enter a value : ");
fgets(zayan.rey,70,stdin);

printf("The answer is : %s",zayan.rey);


}


// Sturce is nothing but we can store more datatypes under one single vaiable





