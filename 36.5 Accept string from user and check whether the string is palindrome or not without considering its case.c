#include<stdio.h>
int strpalindrome(char* str)
{
    char *ptr ="\0",temp='\0';
    ptr=str;

    while(*ptr != '\0')
    {
        ptr++;
    }
    ptr--;;

    while(str<=ptr)
    {
        if(*str != *ptr && *str != *ptr+32 && *str != *ptr-32)
        {
            return 1;
        }
        str++;
        ptr--;
    }
    return 0;
}
int main()
{
    char str[30]="\0";

    printf("Enter The First String => ");
    scanf("%[^\n]s",str);

    printf("%s",(strpalindrome(str)==0)?"String Is Palindrome":"Not Palindrome");

    return 0;
}


