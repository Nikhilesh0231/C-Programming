//To Print Array Declared in Function
#include<stdio.h>
#include<conio.h>
int main()
{
    int n=5;
    int rollno[5]={1,2,3,4,5};  
     for (int i = 0; i <= (n-1); i++)
     {
        printf("Roll No Is:",rollno[i]);
        printf("%d\n");
     } 
      getch();
      return 0;
}
