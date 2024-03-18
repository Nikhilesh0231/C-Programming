#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand()%n;
}
int main()
{
    printf("The Random number between 0 to 5 is : %d\n",generateRandomNumber(5));

   // srand(time(NULL));//this srand  is included in stdlib.h and used to generate a random number,it takes seed as an inpuy
   // printf("The random number between 0 to 100 is : %d\n",rand()%100);
    return 0;
}
