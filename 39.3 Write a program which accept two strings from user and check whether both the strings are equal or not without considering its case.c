#include<stdio.h>
typedef int BOOL;
#define TRUE 0
#define FALSE 1

BOOL strcmpx(char *str1, char *str2)
{
    while(*str1 != '\0' || *str2 != '\0')
    {
        *str1=(*str1 >= 'A' && *str1 <= 'Z')?*str1+32:*str1;
        *str2=(*str2 >= 'A' && *str2 <= 'Z')?*str2+32:*str2;

        if(*str1 != *str2)
        {
            return FALSE;
        }
        str1++;
        str2++;
    }
    return TRUE;
}
int main()
{
    char str1[20]="\0";
    char str2[20]="\0";

    printf("Enter First String => ");
    scanf("%[^\n]s",str1);
    printf("Enter Second String => ");
    scanf(" %[^\n]s",str2);

    printf("Strings Are %s",(strcmpx(str1,str2)==TRUE)?"Equal":"Not Equal");

    return 0;
}
