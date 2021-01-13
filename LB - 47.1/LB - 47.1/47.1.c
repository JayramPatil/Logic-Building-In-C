#include<stdio.h>
void DisplayStar(int iNo)
{
	printf(" * ");
	if (iNo == 1)
	{
		return;
	}
	DisplayStar(iNo - 1);
}
int main()
{
	int iNo = 0;

	printf("Enter The Number => ");
	scanf_s("%d",&iNo);

	DisplayStar(iNo);

	return 0;
}