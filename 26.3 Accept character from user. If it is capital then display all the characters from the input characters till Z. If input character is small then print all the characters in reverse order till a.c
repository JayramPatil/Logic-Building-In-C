#include<stdio.h>
void Display(char ch)
{
    if(ch<97)
    {
        for(;ch<=90;ch++)
        {
            printf(" %c ",ch);
        }
    }
    else
    {
        for(;ch>=97;ch--)
        {
            printf(" %c ",ch);
        }
    }
    return;
}
int main()
{
    char ch='\0';

    printf("Enter The Character => ");
    scanf("%c",&ch);

    (ch>='A' && ch<='Z' || ch>='a' && ch<='z')?Display(ch):ch;

    return 0;
}

