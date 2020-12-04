#include<stdio.h>
typedef unsigned int UINT;
#define TRUE 0
#define FALSE 1

UINT ChkBit(UINT uNo)
{
    if(uNo & 1<<8 || uNo & 1<<11)
    {
        return TRUE;
    }
    return FALSE;
}
int main()
{
    UINT uValue=0;

    printf("Enter First Number => ");
    scanf("%d",&uValue);

    printf("%s",(ChkBit(uValue)==TRUE)?"TRUE":"FALSE");

    return 0;
}
