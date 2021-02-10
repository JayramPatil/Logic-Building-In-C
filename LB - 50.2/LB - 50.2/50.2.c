#include<stdio.h>

int Max(int iNo)
{
	if (iNo/10 == 0)
	{
		return iNo;
	}
	int i = Max(iNo / 10);
	return ((iNo % 10 > i) ? iNo % 10 : i);
}
int main()
{
	int iNo = 0, iRet = 0;

	printf("Enter The Number => ");
	scanf_s("%d", &iNo);

	iRet = Max(iNo);

	printf("Largest Digit In Number %d Is %d", iNo, iRet);

	return 0;
}