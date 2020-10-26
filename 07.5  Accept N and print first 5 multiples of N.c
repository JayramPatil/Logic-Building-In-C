#include<stdio.h>
void MultDisplay(int iNo)
{
    for(int i=1;i<=5;i++)
    {
        printf(" %d",iNo*i);
    }
}
int main()
{
    int iValue=0;

    printf("Enter The Number => ");
    scanf("%d",&iValue);

    MultDisplay(iValue);

    return 0;
}
