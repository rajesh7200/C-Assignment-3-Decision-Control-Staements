//Write a program which takes the month number as an input and display number of
//days in that month
#include<stdio.h>
int main()
{
    int month;
    printf("Enter a month number :");
    scanf("%d",&month);
    if(month>=1 && month<=12)
    {
        if(month==1)
            printf("In January have 31 days.");
        else if(month==2)
            printf("In February have 28 (in leap year 29 days) days.");
        else if(month==3)
            printf("In March have 31 days.");
         else if(month==4)
            printf("In April have 30 days.");
         else if(month==5)
            printf("In May have 31 days.");
         else if(month==6)
            printf("In June have 30 days.");
         else if(month==7)
            printf("In July have 31 days.");
         else if(month==8)
            printf("In August have 31 days.");
         else if(month==9)
            printf("In September have 30 days.");
         else if(month==10)
            printf("In October have 31 days.");
         else if(month==11)
            printf("In November have 30 days.");
         else if(month==12)
            printf("In December have 31 days.");



    }
    else
        printf("............Invalid Enter........... Enter between 1 to 12.............");
    return 0;
}
