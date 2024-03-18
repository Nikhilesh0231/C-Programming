#include <stdio.h>
int main()
{
    int row = 10;
   /* int col = 10;
    for (int i = 1; i <=row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            int result = i * j;
            printf("%4d", result);
        }
        printf("\n");
    }*/
int num;
scanf("%d",&num);
        for (int i = 1; i <= row; i++)
        {
            int result = num * i;
            printf("%4d", result);
        printf("\n");
        }

    return 0;
}