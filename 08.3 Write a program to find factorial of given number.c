#include<stdio.h>
int Factorial(int iNo)
{
    int i=0,Fact=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(i=iNo;i>1;i--)
    {
        Fact=Fact*i;
    }
    return Fact;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter The Value => ");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);

    printf("Factorial Of %d Is %d",iValue,iRet);

    return 0;
}
