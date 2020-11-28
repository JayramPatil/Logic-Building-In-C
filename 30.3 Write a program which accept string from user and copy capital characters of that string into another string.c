#include<stdio.h>
void strcpycap(char*str ,char*dest)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
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

    strcpycap(str,str2);

    printf("%s",str2);

    return 0;
}
