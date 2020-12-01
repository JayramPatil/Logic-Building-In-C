#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
BOOL ChkBit(UINT iNo)
{
    if(iNo & (1<<14))
    {
        return TRUE;
    }
    return FALSE;
}
int main()
{
    UINT iValue=0;
    BOOL bRet=0;

    printf("Enter The Number => ");
    scanf("%d",&iValue);

    bRet=ChkBit(iValue);

    (bRet==TRUE)?printf("15th Bit Is ON"):printf("15th Bit Is OFF");

    return 0;
}
