#include<stdio.h>
int FactDiff(int iNo)
{
    int i=0,Fact=0,NonFact=0;

    for(i=1;i<iNo;i++)
    {
        if(iNo%i==0)
        {
            Fact+=i;
        }
        else
        {
            NonFact+=i;
        }
    }
    return Fact-NonFact;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter The Number => ");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);

    printf("Difference => %d",iRet);

    return 0;
}
