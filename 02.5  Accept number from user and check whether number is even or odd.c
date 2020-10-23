#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
int ChkEven(int iNo)
{
    if(iNo%2==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter The Number => ");
    scanf("%d",&iValue);

    bRet=ChkEven(iValue);

    if(bRet==TRUE)
    {
        printf("Number Is EVEN");
    }
    else
    {
        printf("Number Is ODD");
    }
    return 0;
}
