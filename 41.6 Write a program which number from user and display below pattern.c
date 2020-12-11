#include<stdio.h>
void Pattern(int iNo)
{

    for(; iNo%10>0; iNo=iNo/10)
    {
        //printf(" %d ",iNo%10);             // Method 1
        for(int j=iNo%10; j >= 0; j--)
        {
            (j==iNo%10)?printf(" %d ",j):printf(" # ");       // Method 2
            //printf(" # ");
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





