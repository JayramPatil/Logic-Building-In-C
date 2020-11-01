#include<stdio.h>

void DisplayRev(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        printf("%d\n",iNo%10);
        iNo=iNo/10;
    }
}
int main()
{
    int iNo=0;

    printf("Enter The Number => ");
    scanf("%d",&iNo);

    DisplayRev(iNo);

    return 0;
}
