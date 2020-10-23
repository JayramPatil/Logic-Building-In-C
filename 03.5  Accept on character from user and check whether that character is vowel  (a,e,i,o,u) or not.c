#include<stdio.h>
typedef int BOOL ;
# define TRUE 1
# define FALSE 0
BOOL ChkVowel ( char ch)
{
    if(ch>='a' && ch<='z')
    {
        ch=ch-32;
    }
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }
    return 0;
}
