#include<stdio.h>
void StrRevWord(char* str)
{
    if(str==NULL)
    {
        printf("Empty String !");
        exit(1);
    }
    char *start=NULL,*end=NULL,Temp='\0';
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            str++;
            continue;
        }
        start = str;

        while(*str != ' ' && *str != '\0')
        {
            str++;
        }
        end = --str;
        while(start < end)
        {
            Temp=*start;
            *start=*end;
            *end=Temp;
            start++;
            end--;
        }
        str++;
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
