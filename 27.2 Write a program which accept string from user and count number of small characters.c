#include<stdio.h>
int ChkCapital(char * ptr)
{
    int cnt=0;
    if(*ptr=='\0')
    {
        return 0;
    }
    else
    {
        while(*ptr!='\0')
        {
            if(*ptr>=97 && *ptr<=122)
            {
                cnt++;
            }
            ptr++;
        }
        return cnt;
    }

}
int main()
{
    char arr[20]="\0";
    int iRet=0;

    printf("Enter The String => ");
    scanf("%[^\n]s",arr);

    iRet=ChkCapital(arr);

    (iRet!=0)?printf("Total Small Characters In String Are %d ",iRet):printf("Empty String");

    return 0;
}
