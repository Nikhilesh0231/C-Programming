#include <stdio.h>
#include <conio.h>
int b = 34;       // here b is global variable
int func1(int b1) // here int b1 is formal argument
{
    int loc = 89; // here loc is local variable of func1
    static int myvar = 0;
    printf("The Value Of myvar Is %d\n",myvar);
    myvar++;
    // printf("The Value of b Inside func1 Is %d\n", b);
    // printf("The Address of b Inside func1 Is %d\n", &b);
   // return b1 * 10;
   return b1 + myvar;
}
int main()
{
    int b = 334; // here b is local variable of main
    // printf("The Address of b Inside main Is %d\n", &b);
    int val = func1(b);
    val=func1(b);
    val=func1(b);
    val=func1(b);
    val=func1(b);
    int *ptr = &val;
    // printf("The Value Of Func1 Is : %d", val);

    return 0;
}