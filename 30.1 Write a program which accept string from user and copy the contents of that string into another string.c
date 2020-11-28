#include<stdio.h>
void strcpyx(char*str ,char*dest)
{
    while(*str != '\0')
    {
        *dest=*str;
        str++;
        dest++;
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

    strcpyx(str,str2);

    printf("%s",str2);

    return 0;
}
