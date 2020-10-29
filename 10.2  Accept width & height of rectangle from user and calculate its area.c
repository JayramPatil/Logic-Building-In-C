#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    float Area=0.0;

    return Area=fWidth*fHeight;

}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width => ");
    scanf("%f",&fValue1);
    printf("Enter height => ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area Of Rectangle Is %0.4f",dRet);

    return 0;
 }

