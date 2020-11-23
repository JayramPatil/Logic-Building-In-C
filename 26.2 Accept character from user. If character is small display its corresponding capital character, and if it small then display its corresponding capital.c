#include<stdio.h>

int main()
{
    char ch='\0';

    printf("Enter The Character => ");
    scanf("%c",&ch);

    printf("\t=> %c",(ch>='A' && ch<='Z')?ch+32:(ch>='a' && ch<='z')?ch-32:ch);

    return 0;
}
