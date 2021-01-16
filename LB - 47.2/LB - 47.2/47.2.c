#include<stdio.h>
void DisplayNum(int iNo)
{
	if (iNo == 0)
	{
		return;
	}
	DisplayNum(iNo - 1);
	printf(" %d ", iNo);
}
int main()
{
	int iNo = 0;

	printf("Enter The Number => ");
	scanf_s("%d", &iNo);

	DisplayNum(iNo);

	return 0;
}