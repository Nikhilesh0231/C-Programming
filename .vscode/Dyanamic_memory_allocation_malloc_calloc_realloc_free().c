#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    // use Of malloc()
  /*  int *ptr;
    int a;
    printf("Enter The Size Of The Array You Want To Create\n");
    scanf("%d",&a);
    ptr = (int *)malloc(a * sizeof(int));
    for (int i = 0; i < a; i++)
    {
        printf("Enter The Value No %d Of This Array\n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < a; i++)
    {
        printf("The Value At %d Of This Array Is %d\n",i,ptr[i]);
    }*/

    //Use  Of Calloc

     int *ptr;
    int a;
    printf("Enter The Size Of The Array You Want To Create\n");
    scanf("%d",&a);
    ptr = (int *)calloc(a, sizeof(int));
    for (int i = 0; i < a; i++)
    {
        printf("Enter The Value No %d Of This Array\n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < a; i++)
    {
        printf("The Value At %d Of This Array Is %d\n",i,ptr[i]);
    }

        //Use  Of realloc

    printf("Enter The Size Of The New  Array You Want To Create\n");
    scanf("%d",&a);
    ptr = (int *)realloc(ptr, a*sizeof(int));
    for (int i = 0; i < a; i++)
    {
        printf("Enter The Value No %d Of This Array\n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < a; i++)
    {
        printf("The Value At %d Of This Array Is %d\n",i,ptr[i]);
    }
    free(ptr);//use Of free
    return 0;
}