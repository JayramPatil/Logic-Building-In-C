#include<stdio.h>
void Pattern(int iNo)
{
    for(int i=iNo; i%10>0; i=i/10)
    {
        for(int j=iNo; j%10 != (i/10)%10; j=j/10)
        {
            printf(" %d ",j%10);
        }
        printf("\n");
    }
    return;
}
int main()
{
    int iValue = 0;

    printf("Enter The Number => ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
