// Write a program which takes the cost price and selling price of a product from the
//user. Now calculate and print profit or loss percentage.
#include<stdio.h>
int main()
{
    int cp,sp,profit,loss;
    printf("Enter cost price & selling price of a product :");
    scanf("%d%d",&cp,&sp);
    if(sp>cp)
    {
        profit=(sp-cp)*100/cp;
        printf("Profit on a product is %d percentage",profit);
    }
    else
    {
        loss=(cp-sp)*100/cp;
        printf("Loss on a product is %d percentage",loss);
    }
    return 0;
}
