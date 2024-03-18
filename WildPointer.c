#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int a=334;
    int* ptr;//It is a Wild Pointer
    //* ptr =34;//it is shows an unexpected behaviour this is not good thing to do
    ptr=&a;//ptr is no longer a wild pointer
    printf("The Value Of A is %d\n",*ptr);
    return 0;
}