#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int FuctionDangling()
{
    int a, b, sum;
    a = 34;
    b = 364;
    sum = a + b;
    return &sum;
}
int main()
{
    // case 1: De Allocation Of Memory Block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 34;
    ptr[1] = 56;
    ptr[2] = 64;
    ptr[3] = 5;
    free(ptr); // ptr is now a dangling pointer

    // case 2:Fuction returning local variable address
    int *dangPtr = FuctionDangling(); // dangptr is now a dangling point

    int *danglingptr3;
    // Case 3: If A Variable Goes Out Of Scope
    {
        int a = 12;
        danglingptr3 = &a;
    }
    // Here Va riable Goes Out of Scope.Which maens danglingptr3 is poiting to a location Which is FreedAnd Hence danglingptr3 is now Dangling Ptr.
    return 0;
}