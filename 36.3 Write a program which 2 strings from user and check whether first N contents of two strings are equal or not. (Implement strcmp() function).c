#include<stdio.h>
int strncmpx(char* str,char* str2,int iNo)
{
    while(*str != '\0'  && iNo>=0 || *str2 != '\0'  && iNo>=0)
    {
        if(*str != *str2)
        {
            return 1;
        }
        str++;
        str2++;
        iNo--;
    }
    return 0;
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
     printf("Enter The Number Of Characters You Want To Check => ");
     scanf("%d",&iNo);

     printf("Strings Are %s",(strncmpx(str,str2,iNo)==0)?"Equal":"Not Equal");

     return 0;
}

