#include<stdio.h>

int displaydig(char* ch)
{
    int num=0;

    while(*ch!='\0')
    {
        if(*ch==' ')
        {
            num++;
        }
        ch++;
    }
    return num;
}
int main()
{
    char ch[20]="\0";
    int result=0;

    printf("Enter The String => ");
    scanf("%[^\n]s",ch);

    if(ch=='\0')
    {
        printf("Empty String!!!");
    }
    else
    {
        result=displaydig(ch);
        printf("%d",result);
    }
    return 0;
}
