#include<stdio.h>
void StrRevWord(char* str)
{
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
        *str=(*str>='a' && *str<='z')?*str-32:*str;

        while(*str != ' ' && *str != '\0')
        {
            str++;
        }
    }
    return;
}
int main()
{
    char str[30]="\0";

    printf("Enter The String => ");
    scanf(" %[^\n]s",str);

    StrRevWord(str);
    printf("%s",str);

    return 0;
}
