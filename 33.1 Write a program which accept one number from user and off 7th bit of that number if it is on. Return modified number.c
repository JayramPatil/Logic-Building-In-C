#include<stdio.h>
typedef unsigned int UINT;

int ChkBit(UINT iNo)
{
    return (iNo & (~(1<<(7-1))));
}
int main()
{
    UINT iValue=0;
    int bRet=0;

    printf("Enter The Number => ");
    scanf("%d",&iValue);

    bRet=ChkBit(iValue);

    printf("%d",bRet);

    return 0;
}
