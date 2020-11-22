#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkAlfha(char ch)
{
    return (ch>='A' && ch<='Z' || ch>='a' && ch<='z')?TRUE:FALSE;
}
int main()
{
    char ch='\0';
    BOOL bRet=0;

    printf("Enter The Character => ");
    scanf("%c",&ch);

    bRet=ChkAlfha(ch);

    (bRet==TRUE)?printf("It Is Character"):printf("It Is Not A Character");

    return 0;
}
