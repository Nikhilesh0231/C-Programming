// You To Fill In Values To A Template.
// Letter.txt Looks Something Like This :
// Thanks {{name}} For Purchasing {{item}} From Our Outlet {{outlet}}.
// Please visit our outlet {{outlet}} for Any Kind Of Problems . We Plan To Serve You Again Soon.
// You Have To Read This File And Replace These Values :
//{{name}}-Veeru.
//{{item}}-Table Fan.
//{{outlet}}-Nikhilesh Corporation Outlet.

// Use File Function in C To Accomplish The Same.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
char *replaceword(const char *str, const char *oldWord, const char *newWord)
{
    char *resultString;
    int i, count = 0;
    int newWordLength = strlen(newWord);
    int oldWordLength = strlen(oldWord);

    // Lets Count The Number Of Times Old Word Occurs In The String
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;

            // Jump Over This Word
            i = i + oldWordLength - 1;
        }
    }
    // Making A New String To Fit In The Replaced Words.
    resultString = (char *)malloc(i + count * (newWordLength - oldWordLength) + 1);
    i = 0;
    while (*str)
    {
        // Compare The SubString With Result
        if (strstr(str, oldWord) == str)
        {
            strcpy(&resultString[i], newWord);
            i += newWordLength;
            str += oldWordLength;
        }
        else
        {
            resultString[i] = *str;
            i += 1;
            str += 1;
        }
    }
    resultString[i] = '\0';
    return resultString;
}
int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;
    ptr = fopen("bill.txt", "r");
    ptr2 = fopen("genbill.txt", "w");
    char str[200];
    fgets(str, 200, ptr);
    printf("The Given Bill Template Was : %s\n", str);
    // Call The ReplaceWord Function And Generate newStr.
    char * newStr;
    newStr = replaceword(str,"{{name}}","Nikhilesh Tiwari");
    newStr = replaceword(newStr,"{{item}}","Table Fan");
    newStr = replaceword(newStr,"{{outlet}}","Nikhilesh Corporation Outlet");
    printf("The Actual Bill Genrated Is :  %s\n", newStr);
    printf("The Generated Bill Has Been Written To zthe File genbill.txt\n");

    fprintf(ptr2, "%s", newStr);
    fclose(ptr);
    fclose(ptr2);
    return 0;
}