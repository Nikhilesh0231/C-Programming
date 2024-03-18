/*
Input:
<h1> This Is A Heading </h1>
Output:
This Is Heading

Input:
<Span> This Is A Heading2 </Span>
Output:
This Is Heading2
*/
#include <stdio.h>
#include <conio.h>
#include<string.h>  
void parser(char * string)
{
    int inside = 0; // Variable to track Whether inside the tag
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            inside = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            inside = 0;
            continue;
        }
        if(inside==0){
            string[index]=string[i];
            index++;
        }
    }
    string[index]='\0';

    //Remove The Trailing Spaces from the begining
    while(string[0]==' '){
        //Shift the string to the left
        for (int i = 0; i < strlen(string); i++)
        {
            string[i]=string[i+1];
        }
        
    }
    //Remove The Trailing Spaces from the end
    while(string[strlen(string)-1]==' '){
        string[strlen(string)-1]= '\0';
    }

}
int main()
{
    char string[] = "<h1>  This Is A Heading  </h1>";
    parser(string);
    printf("The parsed string is~~%s~~", string);
    return 0;
}