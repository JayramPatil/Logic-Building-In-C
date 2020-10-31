#include<stdio.h>

void RangeDisplay(int istart,int iend)
{
    if(istart > iend || istart < 0)
    {
        printf("Invalid Range !!!");
    }
    else
    {
        int isum=0;

        for(;istart<=iend;istart++)
        {
            if(istart%2==0)
            {
                isum+=istart;
            }
        }
        printf("\t%d",isum);
    }
}
int main()
{
    int istart=0,iend=0;

    printf("Enter The Starting Point => ");
    scanf("%d",&istart);

    printf("Enter The Ending Point => ");
    scanf("%d",&iend);

    RangeDisplay(istart,iend);

    return 0;
}
