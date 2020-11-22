#include<stdio.h>

float ChkAlfha(char ch)
{
    return (ch=='a' || ch=='A')? 7.00:(ch=='b' || ch=='B')?8.30:(ch=='c' || ch=='C')?9.20:(ch=='d' || ch=='D')?10.30:0;
}
int main()
{
    char ch='\0';
    float bRet=0.0;

    printf("Enter The Character => ");
    scanf("%c",&ch);

    bRet=ChkAlfha(ch);

    (bRet!=0)?printf("Your Exam At %2.2f AM",bRet):printf("Invalid Division");

    return 0;
}
