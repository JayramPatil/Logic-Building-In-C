#include<stdio.h>
void Pattern(int iNo)
{
    int rev=0;
    for(;iNo%10 > 0; iNo=iNo/10)
    {
        rev=(rev*10)+(iNo%10);
    }
    for(; rev%10>0; rev=rev/10)
    {
        //printf(" %d ",rev%10);             // Method 1
        for(int j=rev%10; j >= 0; j--)
        {
            (j==rev%10)?printf(" %d ",j):printf(" # ");       // Method 2
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





