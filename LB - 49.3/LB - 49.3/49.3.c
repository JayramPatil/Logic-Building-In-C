#include<stdio.h>

int StrLen(char* str)
{
	if (*str == '\0')
	{
		return 0;
	}
	return(1 + StrLen(++str));
}
int main()
{
	char Arr[20] = " ";
	int iRet = 0;

	printf("Enter The String => ");
	scanf_s("%[^\n]s", Arr, sizeof(Arr));

	iRet = StrLen(Arr);

	printf("Length Of %s Is %d", Arr, iRet);

	return 0;
}