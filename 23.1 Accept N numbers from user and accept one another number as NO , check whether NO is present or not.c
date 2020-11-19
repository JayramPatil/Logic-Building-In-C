#include<stdio.h>
#include<malloc.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL FindNo(int Arr[],int iNo,int iLen)
{
    int i=0;

    for(i=0;i<iLen;i++)
    {
        if(Arr[i]==iNo)
        {
            return TRUE;
        }
    }
    return FALSE;
}
int main()
{
    int iNo=0,i=0,iNo2;
    BOOL iRet=FALSE;
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

        if(iRet==TRUE)
        {
            printf("TRUE");
        }
        else
        {
            printf("FALSE");
        }

    }
    free(p);
    return 0;
}










