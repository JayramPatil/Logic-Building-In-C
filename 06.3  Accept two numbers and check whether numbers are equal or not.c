#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1,int iNo2)
{
     if(iNo1==iNo2)
     {
         return TRUE;
     }
     return FALSE;
}
int main()
{
   int iValue1 = 0,iValue2 = 0;
   BOOL bRet = FALSE;

   printf("Please Enter Two Numbers => ");
   scanf("%d%d",&iValue1,&iValue2);

   bRet = ChkEqual(iValue1,iValue2);

   if(bRet)
    {
        printf("Equal");
    }
   else
    {
        printf("Not Equal");
    }
    return 0;
}
