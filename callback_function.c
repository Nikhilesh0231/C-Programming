#include <stdio.h>
#include <conio.h>
int sum(int a, int b)
{
    return a + b;
}
void greetHelloAndExecute(int (*fptr)(int, int))
{
    printf("Hello\n");
    printf("The Sum Of 1 And 4 Is : %d\n", fptr(1,4));
}
void greetGoodMorningAndExecute(int (*fptr)(int, int))
{
    printf("Good Morning\n");
    printf("The Sum Of 1 And 4 Is : %d\n", fptr(1,4));
}
int main()
{      
        int (*ptr)(int, int);
        ptr = sum ;
        greetHelloAndExecute(ptr);
        greetGoodMorningAndExecute(ptr);    
        return 0;
}
