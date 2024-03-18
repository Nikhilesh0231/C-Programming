// You Manage A Travel Agency And You Want Your 'n' Drivers To Input Their Following Details:
// 1.Name 2.Driving License No 3. Route 4.Kms
// Your Program Should be able To Take n As Iutput(As You Can Take n=3 For Simplicity) And Driver Will Start Inputting Thir Details One By One
// Your Program Should Print The Details Of The Driver In A Beatiful Fashion.
// Use Structures.
#include <stdio.h>
#include <conio.h>
struct Driver
{
    char name[34];
    char dlNo[45];
    char route[56];
    int Kms;
} dr;

int main()
{
    struct Driver d1, d2, d3;
    printf("Enter The Details Of The Driver1\n");
    printf("Enter The Name Of First Driver\n");
    scanf("%s", &d1.name);

    printf("Enter The dlNo Of First Driver\n");
    scanf("%s", &d1.dlNo);

    printf("Enter The route Of First Driver\n");
    scanf("%s", &d1.route);

    printf("Enter The No Of Kms Of First Driver\n");
    scanf("%d", &d1.Kms);

    printf("Enter The Details Of The Driver2\n");
    printf("Enter The Name Of Second Driver\n");
    scanf("%s", &d2.name);

    printf("Enter The dlNo Of Second Driver\n");
    scanf("%s", &d2.dlNo);

    printf("Enter The route Of Second Driver\n");
    scanf("%s", &d2.route);

    printf("Enter The No Of Kms Of Second Driver\n");
    scanf("%d", &d2.Kms);

    printf("Enter The Details Of The Driver3\n");
    printf("Enter The Name Of Third Driver\n");
    scanf("%s", &d3.name);

    printf("Enter The dlNo Of Third Driver\n");
    scanf("%s", &d3.dlNo);

    printf("Enter The route Of Third Driver\n");
    scanf("%s", &d3.route);

    printf("Enter The No Of Kms Of Third Driver\n");
    scanf("%d", &d3.Kms);

    printf("*********Printing Information Of These Drivers********\n");
    printf("For Driver No1 :\n Name Is: %s\n Dl Number Is: %s\n Route Is: %s\n Kms Is: %d\n", d1.name, d1.dlNo, d1.route, d1.Kms);
    printf("For Driver No2 :\n Name Is: %s\n Dl Number Is: %s\n Route Is: %s\n Kms Is: %d\n", d2.name, d2.dlNo, d2.route, d2.Kms);
    printf("For Driver No3 :\n Name Is: %s\n Dl Number Is: %s\n Route Is: %s\n Kms Is: %d\n", d3.name, d3.dlNo, d3.route, d3.Kms);
    return 0;
}
