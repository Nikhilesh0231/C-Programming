/* Find The Conversion Of 
1.Km to m
2.Inches to foot
3.Foot to cm
4.Pound to kgs
5.Inches to meter*/
#include<stdio.h>
#include<conio.h>
int main()
{
    char Input;
    float Km_to_m=1000;
    float Inches_to_foot=0.0833333;
    float Foot_to_cm=30.48;
    float Pound_to_kgs=0.453592;
    float inches_to_meter=0.0254;
    float first,second;

    while(1)
    {
        printf("Enter The Input Character\nq to Quit\n  1.Km to m\n  2.Inches to foot\n  3.Foot to cm\n  4.Pound to kgs\n  5.Inches to meter\n");
        scanf(" %c",&Input);
        

        switch (Input)
        {
        case 'q':
        printf("Quiting The Program.....");
        goto end;
         break;
         case '1':
         printf("Enter Quantity Of First Unit\n");
        scanf("%f",&first);
         second=first*Km_to_m;
         printf("%f Km Is Equal To %f m\n",first,second);
         break;
          case '2':
          printf("Enter Quantity Of First Unit\n");
        scanf("%f",&first);
         second=first*Inches_to_foot;
         printf("%f Inches Is Equal To %f foot\n",first,second);
         break;
          case '3':
          printf("Enter Quantity Of First Unit\n");
        scanf("%f",&first);
         second=first*Foot_to_cm;
         printf("%f Foot Is Equal To %f cm\n",first,second);
         break;
          case '4':
          printf("Enter Quantity Of First Unit\n");
        scanf("%f",&first);
         second=first*Pound_to_kgs;
         printf("%f Pound Is Equal To %f kgs\n",first,second);
         break;
          case '5':
          printf("Enter Quantity Of First Unit\n");
        scanf("%f",&first);
         second=first*inches_to_meter;
         printf("%f Inches Is Equal To %f m\n",first,second);
         break;
        
        default:
            break;
        }
    }
    end:   
    return 0;
}