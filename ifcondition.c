#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    printf("Enter Your Age :");
    scanf("%d",&age);
    printf("You Have Entered Your Age As :%d \n ",age);
    if(age>=18)
    {
        printf("You Can Vote !!!");
    }
    getch();
    return 0;
    }