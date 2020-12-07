#include<stdio.h>
void Pattern(char* str)
{
    int Cnt=0,i=0,a=0;

    for(i=0;str[i] != '\0';i++)
    {
        for(a=0;str[a] != '\0' && a<=Cnt-i;a++)
        {
            (i==1 && a==0)?Cnt--:Cnt;

            printf(" %c ",str[a]);

            (i==0)?Cnt++:Cnt;
        }
        printf("\n");
    }
    return;
}
int main()
{
    char str[20]="\0";

    printf("Enter The String => ");
    scanf("%[^\n]s",str);

    Pattern(str);

    return 0;
}
