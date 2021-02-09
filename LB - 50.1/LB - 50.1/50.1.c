#include<stdio.h>

int WhiteSpaces(char* str)
{
	if (*str == '\0')
	{
		return 0;
	}
	if (*str != ' ')
	{
		return WhiteSpaces(++str);
	}
	return (1 + WhiteSpaces(++str));
}
int main()
{
	char Arr[20] = " ";
	int iRet = 0;

	printf("Enter The String => ");
	scanf_s("%[^\n]s", Arr, 20);

	iRet = WhiteSpaces(Arr);

	printf("Number Of Whilte Spaces In %s Are %d", Arr, iRet);

	return 0;
}