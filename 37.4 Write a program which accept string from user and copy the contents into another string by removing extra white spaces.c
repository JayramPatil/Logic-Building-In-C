#include<stdio.h>
void StrRevWord(char* str,char* dest)
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
        while(*str != ' ' && *str != '\0')
        {
            *dest=*str;
            str++;
            dest++;
        }
        *dest++=' ';
    }
    return;
}
int main()
{
    char str[30]="\0",dest[20]="\0";

    printf("Enter The String => ");
    scanf(" %[^\n]s",str);

    StrRevWord(str,dest);
    printf("%s",dest);

    return 0;
}
