#include <stdio.h>

typedef int man;
typedef char woman[100];
 typedef double girl;

struct google
{
    man roy;
    woman vela;
    girl maggie;
};

int main()
{

    struct google zoy = {96, "kora", 12.15};

    printf("%f", zoy.maggie);
}


// Here we have combined type defenition and structure and printed double 