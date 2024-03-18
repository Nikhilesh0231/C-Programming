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
            continue;//hereif age is not more than 25 then it will  not execute any prceding line of code 
        }
        printf("my name is nikilesh\n");
        printf("my name is nikilesh\n");
        printf("my name is nikilesh\n");
        printf("my name is nikilesh\n");
        printf("my name is nikilesh\n");
    }
   getch();
   return 0; 
}