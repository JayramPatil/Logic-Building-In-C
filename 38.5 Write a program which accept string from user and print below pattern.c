#include<stdio.h>
void Pattern(char * str)
{
    int i=0,j=0;

    for(;str[j] != '\0';j++)
    {
        for(i=0;str[i] != '\0';i++)
        {
            printf(" %c ",(str[i]>='A' && str[i]<='Z')?str[i]+32:str[i]);
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
