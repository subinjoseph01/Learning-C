//  ARRAY

// A  ARRAY IS A DATA STRUCTIURE THAT  CAN  store MANY VALUES OF THE SAME DATATYPE

#include <stdio.h>

int main()
{
    int numbers[100] = {12, 34, 45};

    int num1 = numbers[2];  
    
    //  <--- this line indicates which answer we need to print (0,1,2)

    printf("%d", num1);
}