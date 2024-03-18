/*
Dyanamic Memory Allocation
ABC Pvt Ltd. Manages  Emplyoee Records Of Other Companies.
Employee Id Can Be Of Any Length And It Can Contain Any Character.
For Three Employees,You Have To Take The Length Of Employee Id  As Input In A Length Integer Variable.
Then ,You Have To Take Employee As An Input And Display It On Screen.
Store The Employee Id In A Character Array Which Is Located Dynmically.
You Have To Create Only One Character Array Dynmically.
Example:
Employee 1:
Enter No Of Characters In Your EId.
45
Dynmically Alloacate The Character Array.
Take Input From User.

Same For Employee 2:
Employee 3:
Enter No Of Characters In Your EId.
6
Dynmically Alloacate The Character Array.
Take Input From User.

Same For Employee 3:
Employee 3:
Enter No Of Characters In Your EId.
9
Dynmically Alloacate The Character Array.
Take Input From User.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int chars, i = 0;
    char a, b;
    char *ptr;
    while (i < 3)
    {
        printf(" Employee %d: Enter The No Of Characters In Your Employee Id : ", i + 1);
        scanf("%d", &chars);
        getchar();//if we use getchar here then it consumes the enter other it will skip scan of a.
        printf("Enter The Value Of A\n");
        scanf("%c", &a);
        getchar();
        printf("Enter The Value Of B\n");
        scanf("%c", &b);
        ptr = (char *)malloc(chars * sizeof(char));
        printf("Enter Your Employee Id : \n");
        scanf("%s", ptr);
        printf("Your Employee Id Is : %s\n", ptr);
        free(ptr);
        i = i + 1;
    }
    return 0;
}
