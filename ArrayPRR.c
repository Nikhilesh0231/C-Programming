#include<Stdio.h>
int main()
{
    int marks[5];
    marks[0]=100;
    marks[1]=88;
    marks[2]=80;
    marks[3]=99;
    marks[4]=90;
for (int  i = 0; i <5; i++)
{
    printf("Marks At %d Is %d \n",i,marks[i]);
}
return 0;
}