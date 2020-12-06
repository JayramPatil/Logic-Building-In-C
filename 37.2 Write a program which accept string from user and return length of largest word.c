#include<stdio.h>
int LargeWord(char* str)
{
    int Cnt = 0, i = 0;
    if(str==NULL)
    {
        printf("Empty String !");
        exit(1);
    }
    while(*str != '\0')
    {
        i=0;
        if(*str == ' ')
        {
            str++;
            continue;
        }
        while(*str != ' ' && *str != '\0')
        {
            str++;
            i++;
        }
        Cnt=(Cnt<i)?i:Cnt;
        str++;
    }
    return Cnt;
}
int main()
{
    char str[30]="\0";

    printf("Enter The String => ");
    scanf(" %[^\n]s",str);

    printf("%d",LargeWord(str));

    return 0;
}
