#include<stdio.h>
typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL ChkBit(UINT uNo,UINT Bit)
{
    if(uNo>>(Bit-1) & 1)
    {
        return TRUE;
    }
    return FALSE;
}
int main()
{
    UINT uValue=0,uBit=0;

    printf("Enter The Number => ");
    scanf("%d",&uValue);
    printf("Enter The Bit => ");
    scanf("%d",&uBit);

    printf("%s",(ChkBit(uValue,uBit)==TRUE)?"TRUE":"FALSE");

    return 0;
}
