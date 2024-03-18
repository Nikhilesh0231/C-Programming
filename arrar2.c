// To Print An Arrray From Input Given By User
#include<stdio.h>
#include<conio.h>
int main()
{  
    printf("Enter The Number Length Of An Array:");
    int n;
    scanf("%d",&n);
       int rollno[n]; 
        for (int i =0; i <= (n-1); i++)
     {
        scanf("%d",&rollno[i]); 
     }
     for (int i =0; i <= (n-1); i++)
     {
        printf("Roll No Is:",rollno[i]);
        printf("%d\n");
     } 
      getch();
      return 0;
}