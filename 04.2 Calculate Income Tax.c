#include<stdio.h>

float IncomeTax(int Income)
{
    if(Income<500000)
    {
        return 0;
    }
    else if(Income>=500000 && Income<1000000)
    {
        return ((Income-499999)*10)/100;
    }
    else if(Income>=1000000 && Income<2000000)
    {
        return (((Income-999999)*20)/100)+50000;
    }
    else if(Income>=2000000)
    {
        return (((Income-1999999)*30/100))+50000+200000;
    }
}
int main()
{
    int Income=0;
    float Tax=0;

    printf("Enter The Income => ");
    scanf("%d",&Income);

    Tax=IncomeTax(Income);

    printf("Income = %d \nTax = %0.0f",Income,Tax);

    return 0;
}
