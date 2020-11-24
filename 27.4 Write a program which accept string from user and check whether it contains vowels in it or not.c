#include<stdio.h>
int ChkCapital(char * ptr)
{
    int scnt=0,ccnt=0;
    if(*ptr=='\0')
    {
        return -1;
    }
    else
    {
        while(*ptr!='\0')
        {
            if(*ptr=='a' || *ptr=='e' || *ptr=='i' || *ptr=='o' || *ptr=='u' || *ptr=='A' || *ptr=='E' || *ptr=='I' || *ptr=='O' || *ptr=='U')
            {
                return 1;
            }
            ptr++;
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

    (iRet==-1)?printf("Empty String"):(iRet==1)?printf("Contains Vowels"):printf("There is no Vowel");

    return 0;
}
