#include<stdio.h>
void Pattern(char* str)
{
    for(int i=0;str[i] != '\0';i++)
    {
        for(int a=0;str[a] != '\0';a++)
        {
            printf(" %c ",str[a]);
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
