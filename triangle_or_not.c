// Write a program which takes the length of the sides of a triangle as an input. Display
//whether the triangle is valid or not.
#include<stdio.h>
int main()
{
    int side1,side2,side3;
    printf("Enter three side of triangle :");
    scanf("%d%d%d",&side1,&side2,&side3);
    if(side1+side2>side3 && side2+side3>side1 && side3+side1>side2)
        printf("This is a triangle.");
    else
       printf("This isn't a triangle.");
    return 0;
}
