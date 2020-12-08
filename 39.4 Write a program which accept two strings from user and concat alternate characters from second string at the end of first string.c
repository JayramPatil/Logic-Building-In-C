#include<stdio.h>

void strcmpx(char *str1, char *str2)
{
    while(*str1 != '\0')
    {
        str1++;
    }
    while(*str2 != '\0')
    {

        *str1++ = *str2++;
        str2++;
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

    strcmpx(str1,str2);

    printf("%s",str1);

    return 0;
}
