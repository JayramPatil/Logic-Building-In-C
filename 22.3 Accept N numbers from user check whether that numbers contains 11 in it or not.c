#include<stdio.h>
int Display(int Arr[],int iSize)
{
    int iCnt=0,iDig=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int iSize=0,iCnt=0,iRet=0;
    int *ptr=NULL;

    printf("Enter Number Of Elements => ");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize * sizeof(int));

    if(ptr==NULL)
    {
        printf("Failed To Allocate Memory !");
        return -1;
    }
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("\nEnter Element %d => ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    iRet=Display(ptr,iSize);

    printf("11 Is %s",(iRet==1)?"Present":"Absent");

    free(ptr);
    return 0;
}


