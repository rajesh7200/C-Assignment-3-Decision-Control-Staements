//Write a program to print greater between two numbers. Print one number of both are the same.
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two number :");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
        printf("%d is greater number than %d.",num1,num2);
    else
        printf("%d is greater number than %d.",num2,num1);
    return 0;
}
