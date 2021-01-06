#include<stdio.h>
int CountSpace(char FNAME[])
{
	FILE* fptr = NULL;
	char Data[20] = " ";
	int Err = 0, i = 0, space = 0;

	Err = fopen_s(&fptr, FNAME, "r");
	if (Err != 0)
	{
		printf("Failed To Open !");
	}
	if (fgets(Data, 20, fptr) != NULL)
	{
		while (Data[i] != '\0')
		{
			if (Data[i] == ' ')
			{
				space++;
			}
			i++;
		}
		fclose(fptr);
		return space;
	}
	fclose(fptr);
	return -1;
}
int main()
{
	char FNAME[10] = " ";
	int iRet = 0;

	printf("Enter The Filename => ");
	scanf_s("%s", FNAME, 10);

	iRet = CountSpace(FNAME);

	printf("Number Of White Spaces Are %d",iRet);

	return 0;
}