#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    int length;
    char str[50] = "Welcome To WCTM";
    char des[20] = "Welcome To";
    char sou[20] = " WCTM";
    char S1[10] = "Welcome";
    char S2[10] = "To";
    char S3[10] = "WCTM";
    int res1 = strcmp(S1, S2); // String Comparision
    int res2 = strcmp(S1, S3);
    int res3 = strcmp(S2, S3);
    strcat(des, sou); // String Concatination
    printf("%s\n", des);
    length = strlen(str); // String Length
    printf("%d\n", length);
    printf("%d\n%d\n%d\n", res1, res2, res3);
    strcpy(des, sou); // String copy
    printf("%s", des);
    printf("%s", sou);
    return 0;
}
