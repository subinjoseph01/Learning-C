#include <stdio.h>

int main()
{

    FILE *pboo = fopen("zebra.txt", "r");

     fprintf(pboo, "kawasaki");

    char yolo[200];

    fgets(yolo, 200, pboo);

    printf("%s", yolo);
}

// Notes:here we have checked the file reading in terminal 

// notes : a = update 
//    r = read
//    w= write 