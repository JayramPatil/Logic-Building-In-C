#include<stdio.h>
unsigned int ToggleBit(unsigned int uNo)
{
    return 1<<9^(uNo^1<<6);
}
int main()
{
    unsigned int uValue=0;

    printf("Enter The Number => ");
    scanf("%d",&uValue);

    printf("%d",ToggleBit(uValue));

    return 0;
}
