#include<stdio.h>
void DisplayNum(int iNo)
{
	printf(" %d ", iNo);
	if (iNo == 1)
	{
		return;
	}
	DisplayNum(iNo - 1);
}
int main()
{
	int iNo = 0;

	printf("Enter The Number => ");
	scanf_s("%d", &iNo);

	DisplayNum(iNo);

	return 0;
}