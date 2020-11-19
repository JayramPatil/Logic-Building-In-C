#include<stdio.h>
#include<malloc.h>

void FindNo(int Arr[],int iStart,int iEnd,int iLen)
{
    int i=0;

    for(i=0;i<iLen;i++)
    {
        if(Arr[i]>=iStart && Arr[i]<=iEnd)
        {
            printf(" %d ",Arr[i]);
        }
    }
    return ;
}
int main()
{
    int iNo=0,i=0,iNo2=0,iNo3=0;
    int *p = NULL;

    printf("Enter The Number Of Elements => ");
    scanf("%d",&iNo);
    printf("Enter The Starting Point => ");
    scanf("%d",&iNo2);
    printf("Enter The Ending Point => ");
    scanf("%d",&iNo3);

    p=(int *)malloc(iNo*(sizeof(int)));

    if(p==NULL)
    {
        printf("Failed To Allocate Memory !!!");
        return 1;
    }
    else
    {
        printf("Enter The Elements\n");
        for(i=0;i<iNo;i++)
        {
            printf("\nEnter The Element %d => ",i+1);
            scanf("%d",&p[i]);
        }

        FindNo(p,iNo2,iNo3,iNo);

    }
    free(p);
    return 0;
}
