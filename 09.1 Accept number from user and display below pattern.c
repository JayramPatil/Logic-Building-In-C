#include<stdio.h>

void Display(int iNo)
{
    int i=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(i=1;i<=iNo*2;i++)
    {
        if(i<=iNo)
        {
            printf(" * ");
        }
        else
        {
            printf(" # ");
        }
    }
}
int main()
{
    int iNo=0;

    printf("Enter The Number => ");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}
