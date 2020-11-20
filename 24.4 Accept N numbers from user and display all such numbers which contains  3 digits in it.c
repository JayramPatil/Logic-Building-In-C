#include<stdio.h>
#include<malloc.h>
int Minimum(int Arr[],int iLen)
{
    int i=0,Temp=0,Cnt=0;

    for(i=0;i<iLen;i++)
    {
        Temp=Arr[i];
        while(Temp>0)
        {
            Cnt++;
            Temp/=10;
        }
        (Cnt!=3)?Cnt=0:printf(" %d ",Arr[i]),Cnt=0;
    }
}
int main()
{
    int iLen=0,iRet=0,*p=NULL,Cnt=0;

    printf("Enter The Number Of Elements => ");
    scanf("%d",&iLen);

    p=(int *)malloc(iLen*sizeof(int));

    if(p==NULL)
    {
        printf("Failed To Allocate Memory....");
    }
    else
    {
        printf("Enter The Elements \n");
        for(Cnt=0;Cnt<iLen;Cnt++)
        {
            printf("\nEnter The Element %d => ",Cnt+1);
            scanf("%d",&p[Cnt]);
        }

        Minimum(p,iLen);

    }
    free(p);
    return 0;
}


