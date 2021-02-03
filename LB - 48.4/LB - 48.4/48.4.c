#include<stdio.h>
void Display(int iNo)
{
	if (iNo == 0)
	{
		return;
	}
	Display(iNo - 1);
	printf(" %c ", 64 + iNo);
}
int main()
{
	Display(5);
	return 0;
}