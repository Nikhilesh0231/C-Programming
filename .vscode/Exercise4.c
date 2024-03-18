#include <stdio.h>
#include <conio.h>
void arrayRev(int arr[])//fuction to Reverse array
{
    for (int i = 0; i < 9 / 2; i++)
    {
        int temp;
        // swap item arr[i] witm with item arr[n-i]
        temp = arr[i];
        arr[i] = arr[8 - i];
        arr[8 - i] = temp;
    }
}
void arrayPrint(int arr[])//Fuction to print array
{
    for (int i = 0; i < 9; i++)
    {
        printf("The Value Of Element %d Is %d\n", i, arr[i]);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("Before Reversing The Array:\n ");
    /*   for (int i = 0; i < 9; i++)
   {
      printf("The Value Of Element %d Is %d\n",i,arr[i]);
   }*/
    arrayPrint(arr);
    arrayRev(arr);
    printf("\nAfter Reversing The Array:\n ");
    /* for (int i = 0; i < 9; i++)
     {
        printf("The Value Of Element %d Is %d\n",i,arr[i]);
     }
     */
    arrayPrint(arr);
    return 0;
}