#include<stdio.h>
typedef unsigned int UINT;

UINT OnBit(UINT uNo,UINT Bit)
{
    return uNo ^ 1<<(Bit-1);
}
int main()
{
    UINT uValue=0,uBit=0;

    printf("Enter The Number => ");
    scanf("%d",&uValue);
    printf("Enter The Bit => ");
    scanf("%d",&uBit);

    printf("%d",OnBit(uValue,uBit));

    return 0;
}
