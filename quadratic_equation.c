//Write a program to check whether roots of a given quadratic equation are real &
//distinct, real & equal or imaginary roots
#include<stdio.h>
int main()
{
    int a,b,c,result=0;
    printf("Enter three number :");
    scanf("%d%d%d",&a,&b,&c);
    result=b*b-4*a*c;
    if(result>0)
        printf("Quadratic equation are real & distinct");
    else if(result=0)
        printf("Quadratic equation are real & equal ");
    else
         printf("Quadratic equation are imaginary roots");
    return 0;
}
