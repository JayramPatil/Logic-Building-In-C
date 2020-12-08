#include<stdio.h>

void strrevcatx(char *str1, char *str2)
{
    int Cnt=0;
    while(1)
    {
        if(*str1 == '\0' && *str2 == '\0')
        {
            break;
        }
        (*str1 != '\0')?str1++:str1;
        (*str2++ != '\0')?Cnt++:str2;
    }
    while(Cnt-- > 0)
    {
        *str1++ = *--str2;
    }
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

    strrevcatx(str1,str2);

    printf("%s",str1);

    return 0;
}
