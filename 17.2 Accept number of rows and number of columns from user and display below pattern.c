#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int iNo1=1,iNo2=1;
    int Ch=1;
    for(iNo1=1;iNo1<=iRow;iNo1++)
    {
        for(iNo2=1,Ch=1;iNo2<=iCol;iNo2++)
        {
            if(iNo1%2!=0)
            {
                printf(" %d ",2*iNo2);
            }
            else
            {
                printf(" %d ",(Ch%2==0)?++Ch:Ch );
                Ch++;
            }

        }
        printf("\n");
    }
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter The Number Of Rows And Columns => ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}



