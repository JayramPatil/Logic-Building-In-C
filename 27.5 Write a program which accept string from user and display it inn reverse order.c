#include<stdio.h>
ChkCapital(char * ptr)
{
    char *ptr2=ptr;
    char temp='\0';

    int scnt=0,ccnt=0;
    if(*ptr=='\0')
    {
        return -1;
    }
    else
    {
        while(*ptr!='\0')
        {
            ptr++;
        }
        ptr=ptr-1;

        while(ptr2<ptr)
        {
            temp=*ptr2;
            *ptr2=*ptr;
            *ptr=temp;
            ptr--;
            ptr2++;
        }

        return 0;
    }

}
int main()
{
    char arr[20]="\0";
    int iRet=0;

    printf("Enter The String => ");
    scanf("%[^\n]s",arr);

    iRet=ChkCapital(arr);

    printf("%s",arr);

    return 0;
}
