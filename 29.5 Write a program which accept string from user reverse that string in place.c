#include<stdio.h>

void strrevx(char *ptr)
{
    char temp='\0';
    char*ptr2=NULL;

    ptr2=ptr;

    while(*ptr != '\0')
    {
        ptr++;
    }
    ptr=ptr-1;

    while(ptr2<ptr)
    {
        temp=*ptr2;
        *ptr2=*ptr;
        *ptr=temp;
        ptr2++;
        ptr--;
    }
    return;
}
int main()
{
    char Arr[20]="\0";

    printf("Enter The String => ");
    scanf("%[^\n]s",Arr);

    strrevx(Arr);

    printf("Modified String Is %s",Arr);

    return 0;
}
