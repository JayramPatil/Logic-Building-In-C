#include<stdio.h>
void strcpysmall(char*str ,char*dest)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z' || *str == ' ')
        {
            *dest=*str;
            dest++;
        }
        str++;
    }
    *dest='\0';
    return;
}
int main()
{
    char str[30]="\0";
    char str2[30]="\0";

    printf("Enter The String => ");
    scanf("%[^\n]s",str);

    strcpysmall(str,str2);

    printf("%s",str2);

    return 0;
}
