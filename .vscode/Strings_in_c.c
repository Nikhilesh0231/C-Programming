#include <stdio.h>
#include <conio.h>
void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{ // if we mentioning array size it must one more than the given string
    // char str[]={'v','e','e','r','u','\0'};// here if we not add back slash it prints an extra chracter
    // char str[]="veeru";//we can also create character array like this in this we dont have to add backslash and 0
    // how to take input from user
    char str[34];
    gets(str);                         // it is used to take input from the  user
    printf("Using printf :%s\n", str); // strin can also be print using printf and puts
    printf("Using Puts:");
    puts(str);
    printf("Using Custom Function PrintStr:");
    printStr(str);
    return 0;
}
