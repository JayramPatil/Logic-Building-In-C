#include<stdio.h>
void strrevcap(char* str)
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
        temp=*str;
        *str=(*ptr>='A' && *ptr<='Z')?*ptr+32:(*ptr>='a' && *ptr<='z')?*ptr-32:*ptr;
        *ptr=(temp>='A' && temp<='Z')?temp+32:(temp>='a' && temp<='z')?temp-32:temp;
        ptr--;
        str++;
    }
    return;
}
int main()
{
    char str[30]="\0";

    printf("Enter The First String => ");
    scanf("%[^\n]s",str);

    strrevcap(str);
    printf("%s",str);

    return 0;
}


