#include<stdio.h>
#include<conio.h>
int main()
{
    label:
    printf("We Are Inside Label\n");
    goto end;//here we not use tis end goto statement then it iterates to n number of times
    printf("Hello World\n");
    goto label;
    end:
    printf("We Are At End");
    getch();
    return 0;
}