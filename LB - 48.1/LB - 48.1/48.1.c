#include<stdio.h>
void Display(int iNo)
{
	printf(" * ");
	if (iNo == 1)
	{
		return;
	}
	Display(iNo - 1);
}
int main()
{
	Display(5);
	return 0;
}