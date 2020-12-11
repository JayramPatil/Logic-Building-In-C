#include<stdio.h>
void Pattern(int iNo)
{
    for(; iNo%10>0; iNo=iNo/10)
    {
        for(int j=iNo%10; j > 0 ; j--)
        {
            printf(" * ");
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



