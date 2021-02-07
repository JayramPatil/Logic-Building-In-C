#include<stdio.h>

int Factorial(int iNo)
{
	if (iNo == 0)
	{
		return 1;
	}
	return(iNo*Factorial(iNo-1));
}
int main()
{
	int iNo = 0, iRet = 0;

	printf("Enter The Number => ");
	scanf_s("%d", &iNo);

	iRet = Factorial(iNo);

	printf("Factorial Of %d Is %d", iNo, iRet);

	return 0;
}