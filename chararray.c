#include<stdio.h>
#include<conio.h>
int main()
{
     printf("Enter The Number Length Of An Array:");
     int n;
     scanf("%d",&n);
     char namearr[n];
     for(int i=0;i<=(n-1);i++)
         {
         scanf("%c",&namearr[i]);
         }
     for(int i=0;i<=(n-1);i++)
     {
        printf("Name is:",namearr[i]);
        printf("%c\n");  
     }
     getch();
     return 0;
}