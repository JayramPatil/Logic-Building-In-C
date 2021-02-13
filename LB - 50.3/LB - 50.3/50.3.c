#include<stdio.h>

int Small(char* str)
{
	if (*str == '\0')
	{
		return 0;
	}
	if (*str >= 'a' && *str <= 'z')
	{
		return (1 + Small(++str));
	}
	
	return Small(++str);
}
int main()
{
	char Arr[20] = " ";
	int iRet = 0;

	printf("Enter The String => ");
	scanf_s("%[^\n]s", Arr, 20);

	iRet = Small(Arr);

	printf("Number Of Small Characters In %s Are %d", Arr, iRet);

	return 0;
}