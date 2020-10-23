#include<stdio.h>

void DisplayFactor(int iNo)
{
    int Cnt=1;
    if(iNo <= 0)
    {
        iNo=-iNo;
    }
    for(Cnt=1;iNo>Cnt;Cnt++)
    {
        if(iNo%Cnt==0 && Cnt%2==0)
        {
            printf(" %d ",Cnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number => ");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}
