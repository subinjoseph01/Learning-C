#include <stdio.h>

int main()

{

int numbers[4][3]= 
{{12,23,21},
{31,76,11,},
{66,33,87},
{23,65,87}};

int row = sizeof(numbers)/ sizeof(numbers[0]);
int col= sizeof(numbers[0])/sizeof(numbers[0][0]);

// The given size of numbers indicates every single bytes 
// which means 1 int is = 4 bytes 

for (int r=0; r<row; r++)
{
    for(int j=0; j<col; j++)
    {
        printf("%d",numbers[r][j]);
        printf("\n");
        
    }
}


}















// Here we did 2d array using for loop and printed  using size of bytes suucessfully