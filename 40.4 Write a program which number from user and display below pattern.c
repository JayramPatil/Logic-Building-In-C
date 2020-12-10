#include<stdio.h>
void Pattern(int iNo)
{
    int rev=0;
    for(;iNo%10 > 0; iNo=iNo/10)
    {
        rev=(rev*10)+(iNo%10);
    }
    for(int i=rev; i%10>0; i=i/10)
    {
        for(int j=rev; j%10 != (i/10)%10; j=j/10)
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


