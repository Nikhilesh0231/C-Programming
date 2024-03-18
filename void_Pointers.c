#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 345;
    float b = 8.3;
    void *ptr;
    ptr = &a;
    printf("The value Of a Is : %d\n",*((int*)ptr));// here ptr is type casted then it is derefrenced
    ptr = &b;
    printf("The value Of b Is : %f\n", *((float *)ptr));
    return 0;
}