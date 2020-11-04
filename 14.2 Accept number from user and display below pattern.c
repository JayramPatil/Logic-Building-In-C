#include<stdio.h>

void Pattern(int iNo)
{
    while(iNo>0)
    {
        printf("%d\t%c\t",iNo,35);
        iNo--;
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
