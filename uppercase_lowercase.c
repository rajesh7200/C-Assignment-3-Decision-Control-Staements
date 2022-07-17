// Write a program to check whether a given alphabet is in uppercase or lowercase
#include<stdio.h>
int main()
{
    int alphabet;
    printf("Enter a alphabet :");
    scanf("%c",&alphabet);
    if(alphabet>='a' && alphabet<='z')
        printf("%c alphabet is a lowercase.",alphabet);
    else if(alphabet>='A' && alphabet<='Z')
        printf("%c alphabet is a uppercase.",alphabet);
    else
    return 0;
}
