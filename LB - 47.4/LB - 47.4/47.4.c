#include<stdio.h>
void DisplayNum(int iNo)			// Using ASCII
{
	if (iNo == 0)
	{
		return;
	}
	DisplayNum(iNo - 1);
	printf(" %c ", 64 + iNo);		
}
int main()
{
	int iNo = 0;

	printf("Enter The Number => ");
	scanf_s("%d", &iNo);

	DisplayNum(iNo);

	return 0;
}