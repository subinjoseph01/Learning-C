//  Bubble sorting

//  Bubble Sort is a simple way to sort numbers by comparing two
//  at a time and swapping them if they're in the wrong order.
// You repeat this process until all the numbers are in the right
// order, like bubbles rising to the top.

#include <stdio.h>

int main()
{

    int temp = 0;

    int number[] = {78, 23, 15, 67, 13};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (number[j] > number[j + 1])
            {

                temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
            }
        }
    }


for(int z=0; z<5; z++)
{

    printf("%d \n",number[z]);
}

return 0;
}




// Here we have done the bubble sorting where we arranged small to big 