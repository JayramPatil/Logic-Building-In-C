#include<stdio.h>
void strlenx(char * str1, char * str2)
{
    int len1=0,len2=0;

    while(1)
    {
        if(*str1 == '\0' && *str2 == '\0')
        {
            break;
        }
        if(*str1 != '\0')
        {
            str1++;
            len1++;
        }
        if(*str2 != '\0')
        {
            str2++;
            len2++;
        }
    }
    printf("Length Of First String Is %d And Second String Is %d",len1,len2);

    return;
}
int main()
{
    char str1[20]="\0";
    char str2[20]="\0";

    printf("Enter First String => ");
    scanf("%[^\n]s",str1);
    printf("Enter Second String => ");
    scanf(" %[^\n]s",str2);

    strlenx(str1,str2);

    return 0;
}
