#include<stdio.h>
void strncatx(char* str,char* str2,int iNo)
{
    while(*str != '\0')
    {
        str++;
    }
    *str++=' ';
    while(*str2 != '\0' && iNo>0)
    {
        *str=*str2;
        str++;
        str2++;
        iNo--;
    }
    *str='\0';
    return;
}
int main()
{
     char str[30]="\0";
     char str2[20]="\0";
     int iNo=0;

     printf("Enter The First String => ");
     scanf(" %[^\n]s",str);
     printf("Enter The Second String => ");
     scanf(" %[^\n]s",str2);
     printf("Enter How Characters You Want To Concat => ");
     scanf("%d",&iNo);

     strncatx(str,str2,iNo);

     printf("%s",str);

     return 0;
}
