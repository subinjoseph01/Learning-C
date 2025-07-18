#include <stdio.h>
#include <string.h>

struct country
{

    int ray;
    char row[15];

};

int main()
{
struct country work = {23,"war"};

 strcpy (work.row ,"lotus");


printf("%s",work.row);

}


// Here we have asssigned a value to the existing char
//  using strcpy also added (string.h) header file on top
 
//  Task : The concept is using structure we have printed a char and we have 
//  renamed it later 