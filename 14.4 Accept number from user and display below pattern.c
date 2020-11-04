#include<stdio.h>

void Pattern(int iNo)
{
    int iNo2=1;

    while(iNo2<=iNo)
    {
        printf("%c\t%d\t%c\t",42,iNo2,35);
        iNo2++;
    }
}
int main()
{
    int iValue=0;

    printf("Enter The Number Of Elements => ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}

