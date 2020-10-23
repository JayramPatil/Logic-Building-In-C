#include<stdio.h>

void Display (int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("DEMO");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d" ,&iValue);

    Display(iValue);

    return 0;
}
