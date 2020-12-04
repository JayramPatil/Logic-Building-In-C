#include<stdio.h>
typedef unsigned int UINT;
#define TRUE 0
#define FALSE 1

UINT ChkBit(UINT uNo,int iPos1,int iPos2)
{
    if(uNo & 1<<iPos1 || uNo & 1<<iPos2)
    {
        return TRUE;
    }
    return FALSE;
}
int main()
{
    UINT uValue=0,iPos1=0,iPos2=0;

    printf("Enter The Number => ");
    scanf("%d",&uValue);
    printf("Enter First Position => ");
    scanf("%d",&iPos1);
    printf("Enter Second Position => ");
    scanf("%d",&iPos2);

    printf("%s",(ChkBit(uValue,iPos1,iPos2)==TRUE)?"TRUE":"FALSE");

    return 0;
}
