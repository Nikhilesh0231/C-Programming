#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
    char string[64]="This Content Is Produced By File_Funtion.c";
   //*********** Reading a File ************
    //ptr = fopen("myfile.txt", "r");
    //fscanf(ptr, "%s", string);
    //printf("The content of this file has %s\n", string);

    //***Writing A file***
   // ptr = fopen("myfile.txt", "w");
    //fprintf(ptr, "%s", string);
    // if we do the same in append mode new string is added to previous content
    //***Writing A file***
        ptr = fopen("myfile.txt", "a");
    fprintf(ptr, "%s", string);
    return 0;
}