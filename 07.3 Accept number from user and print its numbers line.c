#include<stdio.h>
void Display(int iNo)
{
    for(int i=-(iNo);i<=iNo;i++)
    {
        printf("%3d",i);
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
