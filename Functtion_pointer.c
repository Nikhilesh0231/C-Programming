#include <stdio.h>
#include <conio.h>

int sum(int a, int b)
{
    return a + b;
}
void greet()
{
    printf("Hello My User Good Morning");
}
int main()
{
    printf("The Sum Of 1 And 4 Is : %d\n", sum(1, 4)); // Testing The Function Is .
    int (*fptr)(int, int);                             // Declaring a function pointer
    fptr = &sum;                                       // fptr pointing to sum function//Creating a function pointer
    int d = (*fptr)(3, 4);                             // Derefrencing Function  Pointer
    printf("The Value Of d Is : %d\n", d);

    return 0;
}
