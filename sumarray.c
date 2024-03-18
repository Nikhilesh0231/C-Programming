#include<stdio.h>
#include<conio.h>
int main()
{  
    printf("Enter The Number Length Of An Array:");
    int n,sum=0;
    scanf("%d",&n);
       int sumarr[n];
         for (int i =0; i <= (n-1); i++)
     {
        scanf("%d",&sumarr[i]); 
        sum=sum+sumarr[i];
     }
        printf("The Sum Of %d Is:",n);
       printf("%d",sum); 
       getch();
      return 0;
}