#include<stdio.h>

int MultDig(int iNo)
{
    int iDig=0,iMult=1;

    while(iNo>0)
    {
        iDig=iNo%10;

        if(iDig>0)
        {
            iMult*=iDig;
        }

        iNo/=10;
    }
    return iMult;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter The Number => ");
    scanf("%d",&iValue);

    iRet=MultDig(iValue);

    printf("%d",iRet);

    return 0;
}
