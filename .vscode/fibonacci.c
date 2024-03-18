//fib_recursive(int n):
//if n==1||n==2:
//  return n
//else:
//  return  fib_recursive(n-1)+fib_recursive(n-2)
#include<stdio.h>
#include<conio.h>
int fib_recursive(int n)
{
    if (n==1||n==2)
    {
      return n-1;
    }
    else
    {
        return fib_recursive(n-1)+fib_recursive(n-2);
    }
    
    return 0;
}
int fib_iterative(int n)
{
    int a=0;
    int b=1;
    for (int i = 0; i < n-1; i++)
    {
        b=a+b;
        a=b-a;
    }
    
    return a;
}
int main()
{
    int number;
    printf("Enter The Index To Get Fibonacci Series:");
    scanf("%d",&number);
    printf("The Value Of Fibonacci Number At Postion No.%d Using Iterative Approach Is %d\n",number,fib_iterative(number));
    printf("The Value Of Fibonacci Number At Postion No.%d Using Recursive Approach Is %d\n",number,fib_recursive(number));
    return 0;
}