#include<stdio.h>

void PrintEven(int iNo)
{
    int Cnt=1;
    if(iNo <= 0)
    {
        return;
    }
    while(iNo>=Cnt)
    {
        printf(" %d ",2*Cnt);
        Cnt++;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number => ");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}
