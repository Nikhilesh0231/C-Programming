#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 10;
    int *ptr = &a;
    int *ptr1;//it stores garbage value .
    int *ptr2 = NULL;//it stores null value.
    printf("The Value Of a Is : %d\n", a);
    printf("The Value Of Pointer Is : %d\n", *ptr);
    printf("The Value Address Of Pointer Is : %d\n", ptr1);
    printf("The Value Address Of Pointer Is : %d\n", ptr2);
    return 0;
}