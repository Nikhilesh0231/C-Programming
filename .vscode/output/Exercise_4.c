/*take input from the user and ask use to choose 0 for traingular star pattern and 1 for reversed triangular star pattern
Then print The Pattern accordingly
*
**
***
8***
8****
-> Triangular Star pattern

*****
****
***
**
*
-> Reversed Triangular pattern
*/
#include <stdio.h>
#include <conio.h>
void starpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void reversestarpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int rows, type;
    printf("Enter 0 For Star Pattern and 1 For Reversed Star Pattern\n");
    scanf("%d", &type);
    switch (type)
    {
    case 0:
        printf("How Many Rows Do You Want ?\n");
        scanf("%d", &rows);
        starpattern(rows);
        break;
    case 1:
        printf("How Many Rows Do You Want ?\n");
        scanf("%d", &rows);
        reversestarpattern(rows);
        break;
    default:
        printf("You Have Entered An Invalid Choice");
        break;
    }
    return 0;
}