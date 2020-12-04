#include<stdio.h>
typedef unsigned int UINT;
#define TRUE 0
#define FALSE 1

UINT ChkBit(UINT uNo,int iStart,int iEnd)
{
    for(;iStart<=iEnd;iStart++)
    {
        uNo=uNo ^ 1<<iStart-1;
    }
    return uNo;
}
int main()
{
    UINT uValue=0,iStart=0,iEnd=0;

    printf("Enter The Number => ");
    scanf("%d",&uValue);
    printf("Enter First Position => ");
    scanf("%d",&iStart);
    printf("Enter Second Position => ");
    scanf("%d",&iEnd);

    printf("%d",ChkBit(uValue,iStart,iEnd));

    return 0;
}
