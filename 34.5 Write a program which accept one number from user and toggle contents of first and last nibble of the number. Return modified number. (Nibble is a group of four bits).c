#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT uNo)
{
    return (uNo ^ 15<<28) ^ 15;
}
int main()
{
    UINT uValue=0;

    printf("Enter The Number => ");
    scanf("%d",&uValue);

    printf("%d",ToggleBit(uValue));

    return 0;
}
