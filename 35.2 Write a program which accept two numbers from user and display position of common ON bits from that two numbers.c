#include<stdio.h>
typedef unsigned int UINT;

void CountOne(UINT uNo, UINT uNo2)
{
    int Cnt=0,j=0;

    for(int i=0;j=j+(2^i)<=uNo;i++)
    {
        if(uNo & 1<<i && uNo & 1<<i)
        {
            printf("BITS ON In Common => %d \n",i+1);
        }
    }

    return Cnt;
}
int main()
{
    UINT uValue=0,uValue2=0;

    printf("Enter First Number => ");
    scanf("%d",&uValue);
    printf("Enter Second Number => ");
    scanf("%d",&uValue2);

    CountOne(uValue,uValue2);

    return 0;
}
