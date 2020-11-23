#include<stdio.h>

int main()
{
    int iNo=0;
    printf("Decimal Hexadecimal Octal Symbol\n");

    for(;iNo<=255;iNo++)
    {
        printf(" %3d %9x %8o %6c \n",iNo,iNo,iNo,iNo);
    }
    return 0;
}
