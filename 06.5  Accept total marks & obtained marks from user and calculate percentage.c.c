#include<stdio.h>

float Percentage(int iNo1,int iNo2)
{
    if(iNo1<iNo2 || iNo1==0)
    {
        printf("Invalid Data");
        exit(0);
    }
    return (iNo2/iNo1)*100;
}
int main()
{
   int iValue1 = 0,iValue2 = 0;
   float fRet;

   printf("Please Enter Total Marks => ");
   scanf("%d",&iValue1);
   printf("Please Enter Obtained Marks => ");
   scanf("%d",&iValue2);

   fRet = Percentage(iValue1,iValue2);

   printf("Percentage => %0.2f",fRet);

   return 0;
}
