#include<stdio.h>

int EvenOdd(int iNo)
{
    int iDig=0,iEven=0,iOdd=0;

    while(iNo>0)
    {
        iDig=iNo%10;

        if(iDig%2==0)
        {
            iEven+=iDig;
        }
        else
        {
            iOdd+=iDig;
        }
        iNo/=10;
    }

    return iEven-iOdd;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter The Number => ");
    scanf("%d",&iValue);

    iRet=EvenOdd(iValue);

    printf("%d",iRet);

    return 0;
}

