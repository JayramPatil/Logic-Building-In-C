#include<stdio.h>

void Number(int iNo)
{
    if(iNo<50)
    {
        printf("Small");
    }
    else if(iNo>=50 && iNo<100)
    {
        printf("Medium");
    }
    else
    {
        printf("Greater");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}
