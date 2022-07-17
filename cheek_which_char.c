//6. Write a program to check whether a given character is an alphabet (uppercase), an
//alphabet (lower case), a digit or a special character.


#include<stdio.h>
int main()
{
    int chara;
    printf("Enter a alphabet :");
    scanf("%c",&chara);
    if(chara>='a' && chara<='z')
        printf("%c alphabet is a lowercase.",chara);
    else if(chara>='A' && chara<='Z')
        printf("%c alphabet is a uppercase.",chara);
    else if(chara>='0' && chara<='9')
        printf("%c alphabet is a digit.",chara);
    else
        printf("%c alphabet is a special charecter.",chara);
    return 0;
}
