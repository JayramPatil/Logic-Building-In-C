#include<stdio.h>
void OddNum(int iNo)
{
    for(int i=1;i<=iNo;i++)
    {
        if(i%2!=0)
        {
            printf(" %d",i);
        }
    }
}
int main()
{
    int iValue=0;

    printf("Enter The Number => ");
    scanf("%d",&iValue);

    OddNum(iValue);

    return 0;
}
