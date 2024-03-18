#include<stdio.h>
#include<conio.h>
int main()
{
    int a=76;
    int *ptr=&a;
    int *ptr1;//by not assigning any value in this stores a garbage value
    int *ptr2=NULL;//by assigning null it stores ooo value
    printf("The Value Of a Is %d\n",a);// here value is taken from a
    printf("The Value Of a Is %d\n",*ptr);//here vslue is taken from pointer ptr
    printf("The Adress Of Some Garbage Is %p\n",ptr1);
    printf("The Adress Of Some Garbage Is %p\n",ptr2);
    return 0;

}