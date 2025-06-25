
// Here we are learning about LOOP concept

// we have 3 types of Loop here
// They are
// 1) For Loop
// 2) while loop
// 3) do while loop

// For LOOP
// For loop concept

// ForLoop repeats a section of code for the limited amount of times
//  BUT alo it depends on what parameter value we provide
#include <stdio.h>

int main()

{
    for(int r=5; r<=30; r++)
    {
        if(r%5 ==0 && r%3==0)
        {
            printf("%d\n",r);
        }
    }
}

// to push the git file
// git add .
// git commit -m "anything you wish to type"
//
//  Git push

// Note: In the line of 20th you can find  r<20 but when we print we get till number 19 . but
// to get till same num 20 we need to use a = in it
// befor (r<20) after (r<=20)