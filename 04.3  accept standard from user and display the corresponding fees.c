#include<stdio.h>
#include<stdlib.h>

int SchoolFees(int iStandard)
{
    switch(iStandard)
    {
    case 1:
        return 8900;
    case 2:
        return 12790;
    case 3:
        return 21000;
    case 4:
        return 23450;
    default:
        printf("Wrong Input");
        exit(0);
    }
}
int main()
{
    int iStandard=0,iFees=0;

    printf("Enter The Standard => ");
    scanf("%d",&iStandard);

    iFees=SchoolFees(iStandard);

    printf("Fees For Standard %d Is %d ",iStandard,iFees);

    return 0;
}
