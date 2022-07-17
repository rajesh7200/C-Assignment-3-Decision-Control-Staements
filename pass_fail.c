//Write a program to take marks of 5 subjects from the user. Assume marks are given
//out of 100 and passing marks is 33. Now display whether the candidate passed the
//examination or failed
#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5;
    printf("Enter 5 subject marks :");
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
    if(sub1>=33 && sub2>=33 && sub3>=33 && sub4>=33 && sub5>=33)
        printf("Candidate passed the exam");
    else
       printf("Candidate failed the exam");
    return 0;
}
