#include<stdio.h>

double FhtoCs(float fFahrenheit)
{
    return ((fFahrenheit-32)*(5.0/9.0));
}

int main()
{
    float Fahrenheit=0.0;
    double fRet=0.0;

    printf("Enter Temperature In Fahrenheit => ");
    scanf("%f",&Fahrenheit);

    fRet = FhtoCs(Fahrenheit);

    printf("Temperature In Celsius Is => %0.4f",fRet);

    return 0;
}
