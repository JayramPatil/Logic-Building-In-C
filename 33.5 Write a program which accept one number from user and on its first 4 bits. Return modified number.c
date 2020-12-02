#include<stdio.h>
unsigned int OnBit(unsigned int uNo)
{
    for(int i=0;i<4;i++)
    {
        uNo |= 1<<i;
    }
    return uNo;
}
int main()
{
    unsigned int uValue=0;

    printf("Enter The Number => ");
    scanf("%d",&uValue);

    printf("%d",OnBit(uValue));

    return 0;
}
