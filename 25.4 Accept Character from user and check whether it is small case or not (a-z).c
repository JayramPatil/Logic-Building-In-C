#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkAlfha(char ch)
{
    return (ch>='a' && ch<='z')?TRUE:FALSE;
}
int main()
{
    char ch='\0';
    BOOL bRet=0;

    printf("Enter The Character => ");
    scanf("%c",&ch);

    bRet=ChkAlfha(ch);

    (bRet==TRUE)?printf("It Is Small Character"):printf("It Is Not Small Character");

    return 0;
}
