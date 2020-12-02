#include<stdio.h>
int OffBit(unsigned int uValue)
{
    uValue^=1<<6;
    return uValue ^ 1<<9;
}
int main()
{
    unsigned int uNo=0;

    printf("Enter The Number => ");
    scanf("%d",&uNo);

    printf("%d",OffBit(uNo));

    return 0;
}
