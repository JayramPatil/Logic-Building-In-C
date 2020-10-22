#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkGrt(BOOL iNo)
{
    if(iNo>100)
    {
        return TRUE;
    }
    return FALSE;
}
int main()
{
    BOOL iValue = 0,iRet=0;

    printf("Enter The Number => ");
    scanf("%d",&iValue);

    iRet=ChkGrt(iValue);

    if(iRet)
    {
        printf("Given Number Is Greater....");
    }
    else
    {
        printf("Given Number Is Smaller....");
    }
    return 0;
}
