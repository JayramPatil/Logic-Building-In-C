#include<stdio.h>

int Reverse(int iNo)
{
	static int Rev = 0, Base = 1;
	if (iNo == 0)
	{
		return iNo;
	}

	Reverse(iNo / 10);
	Rev = Rev + (iNo % 10) * Base;
	Base = Base * 10;

	return Rev;

}
int main()
{
	int iNo = 0, iRet = 0;

	printf("Enter The Number => ");
	scanf_s("%d", &iNo);

	iRet = Reverse(iNo);

	printf("Reverse Of %d Is %d", iNo, iRet);

	return 0;
}