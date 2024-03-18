#include <stdio.h>
#include <conio.h>
#include <string.h>
typedef struct Student
{
    int Id;
    int Marks;
    char Fav_char;
    char name[34];
}std;
int main()
{
    //int* a,b;// here is a pointer but b is only a integer
    typedef int* intPointer;
    intPointer a,b;// here a and b both are pointers
    int c=45;
    a=&c;
    b=&c;

    struct Student
{
    int Id;
    int Marks;
    char Fav_char;
    char name[34];
}; 
   // struct Student s1,s2;// we can also use next line for same
    std s1,s2;
    s1.Id=34;
    s2.Id=43;
    printf("Value Of s1's Id %d\n",s1.Id);
    printf("Value Of s2's Id %d\n",s2.Id);

    // typedef <previous_name> <alias_name>;
    typedef unsigned long ul;
    typedef int integer;
    integer a = 4;
    ul l1, l2, l3;
    printf("Value Of a is %d",a);
    return 0;
}