#include<stdio.h>

int KMtoMT(int iKilo)
{
    return iKilo*1000;
}
int main()
{
    int iKiloMeter=0,iRet=0;

    printf("Enter The Kilometer => ");
    scanf("%d",&iKiloMeter);

    iRet=KMtoMT(iKiloMeter);

    printf("%d Kilometer Equal To %d Meter",iKiloMeter,iRet);

    return 0;
}
