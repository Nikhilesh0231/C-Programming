#include<stdio.h>
#include<conio.h>
int main()
{
   /* int a =34;
    int *ptra=&a;
    printf("%d\n",ptra);// it prints the address of ptra
    printf("%d\n",ptra+1);//it prints privious address +4 as in int 1 location has 4 byte memory-because it 1 size of int
    return 0;*/
    //now  for char 
    char a ='34';
    char *ptra=&a;
     printf("%d\n",ptra);
     ptra++;//as we know char store 1 byte memory then address is incremented by 1 in this case.
      printf("%d\n",ptra);
       printf("%d\n",ptra-2);//here value obtain after increment is decreasd by  2
}