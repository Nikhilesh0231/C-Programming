#include <stdio.h>
#include <conio.h>
int main()
{
     int a=34;
     int* ptr=&a;
     //int* ptr=NULL;

    // printf("The Address Of A Is:%d\n",ptr);// It gives address of pointer
    if (ptr!=NULL){
     printf("The Value Of A Is:%d\n",*ptr);//It gives Value of pointer
    }
     else
     {
      printf("The Pointer Is NULL Pointer And Cannot Be Derefrenced");
     }
     
    return 0;
}