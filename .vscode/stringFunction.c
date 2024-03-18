#include <stdio.h>
#include <string.h>
int main()
{
    char string1[] = "veeru";
    char string2[] = "nikhilesh";
    char string3[54];
    printf("The strcmp for string1 and string2 returned %d", strcmp(string1, string2));
    // puts(strcat(string1,string2));
    // printf("The Length Of String1 Is :%d\n",strlen(string1));
    // printf("The Length Of String2 Is :%d\n",strlen(string2));
    // printf("The Reversed String String1 Is:");
    // puts(strrev(string1));
    // printf("The Reversed String String2 Is:");
    // puts(strrev(string2));
    // strcpy(string3,strcat(string1,string2));
    // puts(string3);
    return 0;
}
// quick quiz:
// allow user to enter two strings and then concatenate then by saying that 
//str1 is a friend of str2