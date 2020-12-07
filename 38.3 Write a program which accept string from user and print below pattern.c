#include<stdio.h>
void Pattern(char * str)
{
    int i=0,j=0;

    for(;str[i] != '\0';i++)
    {
        for(j=0;j<=i;j++)
        {
            printf(" %c ",str[j]);
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
