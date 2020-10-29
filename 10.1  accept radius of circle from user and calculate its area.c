#include<stdio.h>

double CircleArea(float fRadius)
{
    float Area=0.0;
    float PI=3.14;

    return Area=(PI*fRadius*fRadius);
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius => ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area Of Circle Is %0.4f",dRet);

    return 0;
 }
