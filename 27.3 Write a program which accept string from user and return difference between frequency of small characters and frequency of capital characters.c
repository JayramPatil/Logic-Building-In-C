#include<stdio.h>
int ChkCapital(char * ptr)
{
    int scnt=0,ccnt=0;
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
                ccnt++;
            }
            else if(*ptr>=65 && *ptr<=90)
            {
                scnt++;
            }
            ptr++;
        }
        return ccnt-scnt;
    }

}
int main()
{
    char arr[20]="\0";
    int iRet=0;

    printf("Enter The String => ");
    scanf("%[^\n]s",arr);

    iRet=ChkCapital(arr);

    (iRet!=0)?printf("Difference Between Capital Characters & Small Characters Is %d ",iRet):printf("Empty String");

    return 0;
}
