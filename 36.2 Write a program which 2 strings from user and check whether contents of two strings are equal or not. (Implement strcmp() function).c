#include<stdio.h>
int strcmpx(char* str,char* str2)
{
    while(*str != '\0' && *str2 != '\0')
    {
        if(*str != *str2)
        {
            return 1;
        }
        str++;
        str2++;
    }
    return 0;
}
int main()
{
     char str[30]="\0";
     char str2[20]="\0";

     printf("Enter The First String => ");
     scanf(" %[^\n]s",str);
     printf("Enter The Second String => ");
     scanf(" %[^\n]s",str2);

     printf("Strings Are %s",(strcmpx(str,str2)==0)?"Equal":"Not Equal");

     return 0;
}
