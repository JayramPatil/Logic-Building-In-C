#include<stdio.h>
int CntWord(char* str)
{
    int Cnt = 0;
    if(str==NULL)
    {
        printf("Empty String !");
        exit(1);
    }
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            str++;
            continue;
        }
        while(*str != ' ' && *str != '\0')
        {
            str++;
        }
        Cnt++;
        str++;
    }
    return Cnt;
}
int main()
{
    char str[30]="\0";

    printf("Enter The String => ");
    scanf(" %[^\n]s",str);

    printf("%d",CntWord(str));

    return 0;
}
