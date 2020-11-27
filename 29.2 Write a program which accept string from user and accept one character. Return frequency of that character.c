#include<stdio.h>

int ChkCh(char *ptr ,char cValue)
{
    int Cnt=0;
    while(*ptr != '\0')
    {
        if(*ptr == cValue)
        {
            Cnt++;
        }
        ptr++;
    }
    return Cnt;
}
int main()
{
    char Arr[40]="\0";
    char cValue='\0';
    int iRet=0;

    printf("Enter The String => ");
    fgets(Arr,20,stdin);

    printf("Enter The Character => ");
    scanf("%c",&cValue);

    iRet=ChkCh(Arr,cValue);

    sprintf(Arr,"Frequency Of Character %c in String Is %d",cValue,iRet);

    (iRet>0)?printf("%s",Arr):printf("Character Is Not Present");

    return 0;
}
