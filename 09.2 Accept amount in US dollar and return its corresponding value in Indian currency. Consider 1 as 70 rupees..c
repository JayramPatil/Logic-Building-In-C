#include<stdio.h>

int DollarToINR(int iNo)
{
    return iNo*70;
}
int main()
{
    int iDollar=0,iRet=0;

    printf("Enter Total Number Of Dollar(s) => ");
    scanf("%d",&iDollar);

    iRet=DollarToINR(iDollar);

    printf("\n %d Dollar(s) Corresponding Value In Indian Currency Is %d\n",iDollar,iRet);

    return 0;
}
