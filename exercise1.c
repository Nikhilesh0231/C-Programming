// print a multiplication table entered by user
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter The Number Of Which Table You Want : ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {  
        int a=n*i;
        printf("%d X %d = %d\n",n,i,a);
    }
    getch();
    return 0;
}