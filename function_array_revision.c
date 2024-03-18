#include <stdio.h>
#include <conio.h>
/*

//   FUNCTION
void printStar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}
int main()
{
    clrscr();
    printStar(6);
    getch();
    return 0;
}*/

//  ARRAY//
/*
int main()
{
    int n=10;
    int studentRollno[10]={1,2,3,4,5,6,7,8,9,10};
    for (int  i = 0; i < n; ++i)
    {
        printf("Roll No Is %d\n",studentRollno[i]);
    }
    return 0;
}
*/

//  RECURSIVE FUNCTION PROGRAM
int factorial(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}
int main()
{
    int num;
    printf("Enter The Number Of Which Factorial You Want : ");
    scanf("%d", &num);
    printf("The Factorial Of %d Is : %d", num, factorial(num));
    return 0;
}
