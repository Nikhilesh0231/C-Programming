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
    else if(age>=10)
    {
        printf("Your Age Is In Between 10 to 18 You Are Kid");
    }
      else if(age>=5)
    {
        printf("Your Age Is In Between 5 to 10 You are Kid");
    }
    else
    {
       printf("You Can't Vote !!!  You are Kid");  
    }
    getch();
    return 0;
    }