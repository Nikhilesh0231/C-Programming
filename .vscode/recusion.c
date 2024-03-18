#include<stdio.h>
#include<conio.h>
int factorial(int number)
{
    if(number==0||number==1)
    {
        return 1;
    }
    else
    {
        return (number *factorial(number-1));
    }
}
int main()
{
    int num;
    printf("Enter The Number You The Factorial Of:");
    scanf("%d",&num);
    printf("The Factorial Of The Given Number %d Is : %d",num,factorial(num));
    return 0;
}