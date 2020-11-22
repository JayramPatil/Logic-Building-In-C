#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkAlfha(char iNo)
{
    return (iNo>=48 && iNo<=57)?TRUE:FALSE;
}
int main()
{
    char iNo;
    BOOL bRet=0;

    printf("Enter The Digit => ");
    scanf("%c",&iNo);

    bRet=ChkAlfha(iNo);

    (bRet==TRUE)?printf("It Is Digit"):printf("It Is Not A Digit");

    return 0;
}
