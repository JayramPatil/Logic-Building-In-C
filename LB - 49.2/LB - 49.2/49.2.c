#include<stdio.h>

int Sum(int iNo)
{
	if (iNo/10 == 0)
	{
		return iNo;
	}
	return(iNo%10 + Sum(iNo/10));
}
int main()
{
	int iNo = 0, iRet=0;

	printf("Enter The Number => ");
	scanf_s("%d", &iNo);

	iRet = Sum(iNo);

	printf("Sum Of Digits Is %d", iRet);

	return 0;
}