#include <stdio.h>
#include <conio.h>
int main()
{
    int m, n, sum = 0;
    int a[3][4];
    int b[4][2];
    int result[3][2];
    printf("Enter The First Matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter %d %d Element Of First Matrix\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter The Second Matrix\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter %d %d Element Of Second Matrix\n", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("The Result Is : \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                sum += a[i][k] + b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d \t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
