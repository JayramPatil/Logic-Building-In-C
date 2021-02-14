#include<stdio.h>

int Min(int iNo)
{
	if (iNo/10 == 0)
	{
		return iNo;
	}
	int i = Min(iNo / 10);
	return (iNo % 10 < i) ? iNo % 10 : i;
}
int main()
{
	int iNo = 0, iRet = 0;

	printf("Enter The Number => ");
	scanf_s("%d", &iNo);

	iRet = Min(iNo);

	printf("Minimum Digit In %d Is %d", iNo, iRet);

	return 0;
}