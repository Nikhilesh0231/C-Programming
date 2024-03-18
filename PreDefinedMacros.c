#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    printf("File Name Is %s\n",__FILE__);
    printf("Todays Date Is %s\n",__DATE__);
    printf("Current Time Is %s\n",__TIME__);
    printf("Line No Is %d\n",__LINE__);
    printf("ANSI: %d\n",__STDC__);
    return 0;
}