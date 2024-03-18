#include<stdio.h>
#include<conio.h>
int main()
{
   // int marks[5];// 1 dimensional array 
   // for (int i = 0; i < 5; i++)
   // {
   //     printf("EnterThe Value of %d Element Of The Array \n ",i);
   //     scanf("%d",&marks[i]);
   // }
   // for (int i = 0; i < 5; i++)
   // {
   //     printf("The Value Of %d Element Of The Array Is : %d\n ",i,marks[i]);
   // }
   /* marks[0]=89;
    printf("Marks Of Student 1 Is : %d\n",marks[0]);
    marks[0]=59;
    marks[1]=69;
    marks[2]=79;
    marks[3]=99;
    printf("Marks Of Student 1 Is : %d\n",marks[0]);
    printf("Marks Of Student 2 Is : %d\n",marks[1]);
    printf("Marks Of Student 3 Is : %d\n",marks[2]);
    printf("Marks Of Student 4 Is : %d\n",marks[3]);
    */
   int m1[2][3]={{12,13,14},{15,16,17}};
   for (int i = 0; i < 2; i++)
   {
    for (int j = 0; j < 3; j++)
    {
      // printf("The Value Of %d ,%d Element Of Array Is :%d\n",i,j,m1[i][j]); 
      printf(" %d",m1[i][j]);
    } 
    printf("\n");
    
   }
   
   return 0;
}