#include<stdio.h>
void strncpyx(char*str ,char*dest, int Cnt)
{
    while(*str != '\0' && Cnt > 0)
    {
        *dest=*str;
        str++;
        dest++;
        Cnt--;
    }
    *dest='\0';
    return;
}
int main()
{
    char str[30]="\0";
    char str2[30]="\0";
    int iCnt=0;

    printf("Enter The String => ");
    scanf("%[^\n]s",str);
    printf("Enter How Many Characters Do You Want To Copy => ");
    scanf("%d",&iCnt);

    strncpyx(str,str2,iCnt);

    printf("%s",str2);

    return 0;
}
