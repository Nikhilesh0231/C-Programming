#include <stdio.h>
#include <conio.h>
int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is%d\n", i, array[i]);
    }
    // array[0]=382;// very important point that if you change any value here gets reflected in main( )
    return 0;
}
int func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is%d\n", i, ptr[i]); // in place of ptr[i] we can also write *(ptr+i)
    }
    ptr[2] = 11;
    return 0;
}
void func3(int arr1[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The Value At %d,%d is %d\n", i, j, arr1[i][j]);
        }
    }
}
int main()
{
    int arr1[2][2] = {{2, 3}, {4, 5}};
    // int arr[] = {2, 3, 4, 5};
    // here array is passed as parameter
    /*printf("The value of index 0 is %d\n",arr[0]);
 func1(arr);
 printf("The value of index 0 is %d\n",arr[0]);
 */
    // here array is as pointers
    // func2(arr);
    // func2(arr);
    func3(arr1);
    return 0;
}