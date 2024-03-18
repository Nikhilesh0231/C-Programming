#include<stdio.h>
#include<conio.h>
int isPalindrome(int num)
{
    int reversed = 0;
    int orgnumber=num;
    while (num !=0)
    {
        reversed=reversed*10+num%10;
        num=num/10;
    }
    printf("Reversed Number Is:%d\n",reversed);
    if (orgnumber==reversed)
    {
       return 1;
    }
    else
    {
        return 0;
    }
    
    return 0;
}  
int main()
{
    //Palindrome ---If We Write A number and write the number again by reversing the digits and the number we get is same as the number we reversed te digits 
    int number;
    printf("Entre a number to check whether it is a palindrome or not :");
    scanf("%d",&number);
    if (isPalindrome(number))
    {
        printf("This number is palindrome \n");
    }
    else{
        printf("This number is not  palindrome \n");
    }
    
    return 0;
}