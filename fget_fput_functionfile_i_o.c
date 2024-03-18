#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *ptr = NULL;
    // ptr = fopen("myfile1.txt", "r");

    // ptr = fopen("myfile1.txt", "w");

    // ptr = fopen("myfile1.txt", "r+");

    // ptr = fopen("myfile1.txt", "w+");
    ptr = fopen("myfile1.txt", "a+");

    // char c = fgetc(ptr);
    // printf("The Character I Read Was %c\n",c);
    // c=fgetc(ptr);
    // printf("The Character I Read Was %c\n",c);

    // char str[34];
    // fgets(str, 6, ptr);
    // printf("The String Is : %s\n", str);

    // fputc('o', ptr);
    // fputs("Nikhilesh", ptr);
    fclose(ptr);
    return 0;
}