// File

#include <stdio.h>

int main()
{

        FILE *pwork = fopen("zoop.txt","w");
       int a = fprintf(pwork , " coma estas! ");
        fclose(pwork);
        printf("%d",a);

        // if(a>0)
        // {
        //     printf("Created successsfully");
        // }

   remove("zoop.txt");

    if (a == 0)
    {
        printf("%s", "File deleted successfully");
    }
    else{
        printf("%s", "Error");
    }
}

// notes:

// 1)To create a file first we should save the file in a name (save it in pointer : *pname)
// 2) To create a file use command  : fopen("word.text","w"); w indicates write
// 3) To create find the number of text : add  a variable like
//  int a = fprintf(pwork , " coma estas! ");
//  4) Here we use the if statement the file run successfully and comapre the context number of
//  words is higher
//  5)To delete the file : remove(file name.txt )
// 6) TO update anything inside the file we ned to replace W and place 'a' to write and save
