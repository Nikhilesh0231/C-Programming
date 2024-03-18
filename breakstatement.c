#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter Your Age :");
        scanf("%d",&age);
        if (age>25)
        {
            break;
        }
    }
   getch();
   return 0; 
}