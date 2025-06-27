#include <stdio.h>

int main()

{
    int num = 11;
    while (num > 1)      /* <----- this part we can only provide condition / no var no oper
                               we can apply variable or operation outside
                                the while function brackets */                              
    {
        num--;                          /*Here we minus  so 0-0 */
        printf("%d \n", num);
    }

    return 0;
}

// while Loop  In learning
/* here we running a code as task of print 10 to 1  */
