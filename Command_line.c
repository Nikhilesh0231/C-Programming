#include<stdio.h>
#include<conio.h>

int main(int argc, char const *argv[])
{
    printf("The Value Of Argc Is : %d\n",argc);
    for (int i = 0; i < argc; i++)
    {
        printf("This Argument At Index Number %d has Value Of %s \n",i,argv[i]);
    }
    
    return 0;
}
