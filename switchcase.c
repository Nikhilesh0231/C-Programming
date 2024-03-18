#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    printf("Enter Your Age : ");
    scanf("%d",&age);
    switch (age)
    {
    case 3:
        printf("Your Age Is 3");
        break;
    case 15:
        printf("Your Age Is 15");
        break;
    case 18:
        printf("Your Age Is 18");
        break;
    default:
        printf("Your Age Is Not 3,15 and 18");
        break;
    }
}