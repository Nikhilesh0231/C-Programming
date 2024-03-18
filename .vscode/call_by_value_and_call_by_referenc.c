/*
#include<stdio.h>
#include<conio.h>
void changevalue(int *address){
*address=345;
}
int main(){
    int a=34,b=36;
    printf("The Value of a now is %d\n",a);
    changevalue(&a);//call by reference
    printf("The Value of a now is %d\n",a);
    return 0;
}
*/
// Quick Quiz :Given Two Numbers a and b,Add them,Then Subtract them and assign toa and b using call by reference/
#include<stdio.h>
#include<conio.h>
void changevalue1(){
    
}
int main()
{
    int a=5;
    int b=4;
    printf("The Value Of a And b is %d,%d\n",a,b);
    int sum=a+b;
    printf("The Sum Of a and b is %d\n",sum);
    int subtract=a-b;
    printf("The Subtraction a and b is %d",subtract);

}