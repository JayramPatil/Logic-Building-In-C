#include<stdio.h>

void Pattern(int iNo)
{
    int Ch=65;

    while(iNo>0)
    {
        printf("%c\t",Ch);
        iNo--;
        Ch++;
    }
}
int main()
{
    int iValue=0;

    printf("Enter The Number Of Elements => ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
