#include<stdio.h>

void struprx(char* ch)
{
    while(*ch!='\0')
    {
        if(*ch>=65 && *ch<=90)
        {
            *ch=*ch+32;
        }
        else if(*ch>=90 && *ch<=122)
        {
            *ch=*ch-32;
        }
        ch++;
    }
}
int main()
{
    char ch[20]="\0";

    printf("Enter The String => ");
    scanf("%[^\n]s",ch);

    (ch=='\0')?printf("Empty String!!!"):struprx(ch);

    printf("%s",ch);

    return 0;
}
