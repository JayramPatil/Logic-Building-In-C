#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkSpl(char ch)
{
    return (ch<33 || ch>=48 && ch<=57 || ch>=65 && ch<=90 || ch>=97 && ch<=122)?FALSE:TRUE;
}
int main()
{
    char ch='\0';
    BOOL bRet=0;

    printf("Enter The Character => ");
    scanf("%c",&ch);

    bRet=ChkSpl(ch);

    printf("%s",(bRet==TRUE)?"It Is Special Symbol":"It Is Not Special Symbol");

    return 0;
}

