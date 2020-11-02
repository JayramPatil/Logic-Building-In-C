#include<stdio.h>

int ChkDig(int iNo)
{
    int iDig=0,Cnt=0;

    while(iNo>0)
    {
        iDig=iNo%10;
        if(iDig>3 && iDig<7)
        {
            Cnt++;
        }
        iNo/=10;
    }
    return Cnt;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter The Number => ");
    scanf("%d",&iValue);

    iRet=ChkDig(iValue);

    printf("%d",iRet);

    return 0;
}
