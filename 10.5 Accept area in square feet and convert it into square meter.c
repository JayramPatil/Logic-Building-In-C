#include<stdio.h>

double FttoMt(float fFeet)
{
    return fFeet*0.0929;
}
int main()
{
    float fFeet=0.0;
    double fRet=0.0;

    printf("Enter Area In Square Feet => ");
    scanf("%f",&fFeet);

    fRet=FttoMt(fFeet);

    printf("Area In Square Meter => %f",fRet);

    return 0;
}
