//You Have To Create A Command Line Utility Add\Subtract\Divide\Multiply Two Numbers.
// First Command Line Argument Of Your C Program Must Be The Operation.
//The Next Argument Being Two Numbers .For Example
//>>Coomand.c Add 34 4
//>38
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
    char * Operation;
    int num1,num2;
    Operation = argv[1];
    num1 = atoi(argv[2]);//atoi takes string converts as Integer is included in stlib.h
    num2 = atoi(argv[3]);

    printf("Operation Is : %s\n",Operation);
    printf("Num1 Is : %d\n",num1);
    printf("Num2 Is : %d\n",num2);

    if (strcmp(Operation,"add")==0)
    {
        printf(" Addition Is : %d\n",num1 + num2);
    }
    else if (strcmp(Operation,"multiply")==0)
    {
        printf("Multiplication Is : %d\n",num1 * num2);
    }
        else if (strcmp(Operation,"subtract")==0)
    {
        printf("Subtraction Is : %d\n",num1 - num2);
    }   
     else if (strcmp(Operation,"divide")==0)
    {
        printf("Division Is : %d\n",num1 / num2);
    }
    
    

    return 0;
}