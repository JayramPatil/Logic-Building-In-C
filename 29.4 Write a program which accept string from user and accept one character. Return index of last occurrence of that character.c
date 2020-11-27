#include<stdio.h>

int ChkCh(char *ptr ,char cValue)
{
    int Cnt=0,i=-1;
    while(*ptr != '\0')
    {
        if(*ptr == cValue)
        {
            i=Cnt;
        }
        ptr++;
        Cnt++;
    }
    return i;
}
int main()
{
    char Arr[20]="\0";
    char cValue='\0';
    int iRet=0;

    printf("Enter The String => ");
    fgets(Arr,20,stdin);

    printf("Enter The Character => ");
    scanf("%c",&cValue);

    iRet=ChkCh(Arr,cValue);

    (iRet>=0)?printf("Last Occurrence Of Character %c Is In Index No :- %d",cValue,iRet):printf("Character Is Not Present");

    return 0;
}
