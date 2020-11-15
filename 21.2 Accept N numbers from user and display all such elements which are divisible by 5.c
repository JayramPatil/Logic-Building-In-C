#include<stdio.h>

void Display(int Arr[],int iSize)
{
    int Cnt=0;
    for(Cnt=0;Cnt<iSize;Cnt++)
    {
        if(Arr[Cnt]%5==0)
        {
            printf("\n%d",Arr[Cnt]);
        }
    }
    return;
}
int main()
{
    int iSize=0,Cnt=0;
    int *ptr=NULL;

    printf("Enter Number Of Elements => ");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize * sizeof(int));

    if(ptr==NULL)
    {
        printf("Failed To Allocate Memory");
        return -1;
    }

    for(Cnt=0;Cnt<iSize;Cnt++)
    {
        printf("Enter Element %d => ",Cnt+1);
        scanf("%d",&ptr[Cnt]);
    }
    Display(ptr,iSize);

    free(ptr);
    return 0;
}
