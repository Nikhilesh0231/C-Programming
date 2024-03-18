#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    printf("Value at position 1 Of The Array Is:%d\n",arr[0]);
    printf("The Address of 1 Element Of Array Is:%d\n",&arr[0]);
    printf("The Address of 1 Element Of Array Is:%d\n",arr);//this line and above of this line has same meaning 
    printf("The Address of 2 Element Of Array Is:%d\n",&arr[1]);
    printf("The Address of 2 Element Of Array Is:%d\n",arr+1);//this line and above of this line has same meaning

        printf("Value at position 1 Of The Array Is:%d\n",arr[0]);
    printf("The Value At Address of 1 Element Of Array Is:%d\n",*(&arr[0]));
    printf("The Value At Address of 1 Element Of Array Is:%d\n",*(arr));//this line and above of this line has same meaning 
    printf("The Value At Address of 2 Element Of Array Is:%d\n",*(&arr[1]));
    printf("The Value At Address of 2 Element Of Array Is:%d\n",*(arr+1));//this line and above of this line has same meaning 
    return 0;
}