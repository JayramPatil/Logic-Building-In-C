#include<stdio.h>
int main()
{
   char Name[30];
   printf("Please Enter Full Name ");
   scanf("%[^\n]",&Name);

   printf("Your name is %s",Name);

   return 0;
}
