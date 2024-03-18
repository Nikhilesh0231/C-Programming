#include<stdio.h>
#include<conio.h>
int main()
{
    int num,index=1;
    printf("Enter The Number :");
    scanf("%d",&num);
    do
    {
        printf("%d\n",index);
        index+=1;
    } while (index<=num);
    getch();
    return 0;
    
}