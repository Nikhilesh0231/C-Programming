//1.with arguments and with return value
#include<stdio.h>
#include<conio.h>
/*int sum(int a,int b){
    return a+b;
}
int main()
{
    int a,b,c;
    a=9;
    b=3;
    c=sum(a,b);
    printf("The Sum Is %d\n",c);
    return 0;
    getch();
}*/
//2.with arguments and without return value
/*void printstar(int n){
    for(int i=0;i<n;i++){
    printf("%c",'*');}
}
int main()
{
printstar(6);
getch();
return 0;
}*/
//3.without argument and with return value
/*int takenumber()
{
    int i;
    printf("Enter A Number : ");
    scanf("%d",&i);
    return i;
}
int main()
{
    int c;
    c=takenumber();
    printf("The Number Entered Is %d\n",c);
}*/
//4.Without argument and without return value
void area()
{
    int area,side;
    printf("Enter The Side Of A Square :");
    scanf("%d",&side);
    area=side*side;
    printf("Area Of Square Is: %d",area);
}
int main()
{
    area();
    getch();
    return 0;
}