#include <stdio.h>
//#include"null_pointers.c"//By Doing THis We Can Any Other Dile In this Program 
# define PI 3.14
# define SQUARE(r) r*r
int main()
{
    int r=4;
    printf("The Area Of Sruare Is %f\n",PI *SQUARE(r));
    return 0;
}