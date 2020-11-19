#include<stdio.h>
#include<malloc.h>

int FindNo(int Arr[],int iNo,int iLen)
{
    int i=0,Cnt=0;

    for(i=0;i<iLen;i++,Cnt++)
    {
        if(Arr[i]==iNo)
        {
            return Cnt;
        }
    }
    return -1;
}
int main()
{
    int iNo=0,i=0,iNo2=0,iRet=0;
    int *p = NULL;

    printf("Enter The Number Of Elements => ");
    scanf("%d",&iNo);
    printf("Enter The Number To Find => ");
    scanf("%d",&iNo2);

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
        iRet=FindNo(p,iNo2,iNo);

        if(iRet==-1)
        {
            printf("There Is No Such Number");
        }
        else
        {
            printf("Index Number Of First Occurrence Of %d Is %d",iNo2,iRet);
        }
    }
    free(p);
    return 0;
}










