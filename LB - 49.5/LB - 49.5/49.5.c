#include<stdio.h>

int Product(int iNo)
{
	if (iNo/10 == 0)
	{
		return iNo;
	}
	return(iNo%10 * Product(iNo/10));
}
int main()
{
	int iNo = 0, iRet = 0;

	printf("Enter The Number => ");
	scanf_s("%d", &iNo);

	iRet = Product(iNo);

	printf("Product Of Digits Of %d Is %d", iNo, iRet);

	return 0;
}