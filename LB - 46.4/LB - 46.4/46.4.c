#include<stdio.h>
int CountChar(char FNAME[], char ch)
{
	FILE* fptr = NULL;
	char Data[20] = " ";
	int Err = 0, i = 0, frq = 0;

	Err = fopen_s(&fptr, FNAME, "r");
	if (Err != 0)
	{
		printf("Failed To Open !");
	}
	if (fgets(Data, 20, fptr) != NULL)
	{
		while (Data[i] != '\0')
		{
			if (Data[i] == ch)
			{
				frq++;
			}
			i++;
		}
		fclose(fptr);
		return frq;
	}
	fclose(fptr);
	return -1;
}
int main()
{
	char FNAME[10] = " ", ch = ' ';
	int iRet = 0;

	printf("Enter The Filename => ");
	scanf_s("%s", FNAME, 10);
	printf("Enter The Character To Count Its Frequency => ");
	scanf_s(" %c", &ch, sizeof(ch));

	iRet = CountChar(FNAME,ch);

	printf("Frequency Of %c Is %d", ch, iRet);

	return 0;
}