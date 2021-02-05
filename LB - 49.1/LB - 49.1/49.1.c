#include<stdio.h>

void Display(int iNo)
{
	(iNo % 2 == 0) ? printf(" %d ", iNo / 2) : printf(" * ");

	if (iNo == 1)
	{
		return;
	}
	Display(iNo - 1);
}
int main()
{
	int iNo = 0;

	printf("Enter The Number => ");
	scanf_s("%d", &iNo);

	Display(iNo*2);

	return 0;
}