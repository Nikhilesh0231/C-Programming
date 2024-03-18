#include <stdio.h>
#include <conio.h>
// #include"use_Extern.c"
int sum = 897;
int myfunc(int a, int b)
{
    // auto int sum;
   static int sum;
     

    sum++;
    printf("The Sum Is %d\n", sum);
    // sum = a + b;
    return sum;
}
// extern int sum;
int main()
{
    // Declaration-Telling the compiler about the varaibles(no space reserved)
    // Definition-Declaration +Space Reservation
     register int sum = myfunc(3, 5);
    sum = myfunc(3, 5);
    sum = myfunc(3, 5);
    sum = myfunc(3, 5);
    // printf("The Sum Is %d\n", sum);
    return 0;
}