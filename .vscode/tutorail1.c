#include <stdio.h>
#include <conio.h>
int main()
{
    float num1, num2;
    double sum, sub, mul, Div;
    printf("Enter The First Number:");
    scanf("%f", &num1);
    printf("Enter The Second Number:");
    scanf("%f", &num2);
    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    Div = num1 / num2;
    printf("The Division Of First Number by Second Number:%lf\n The Multily Of First Number by Second Number:%lf\n", Div, mul);
    printf("The Addition  Of First Number by Second Number:%lf\n", sum);
    printf("The Subtraction Of First Number by Second Number:%lf", sub);
    getch();
    return 0;
}