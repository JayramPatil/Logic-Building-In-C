#include<stdio.h>
int CountSmall(char FNAME[])
{
	FILE* fptr = NULL;
	int Err = 0, i = 0, j = 0;;
	char data[30] = " ";

	Err = fopen_s(&fptr, FNAME, "r");
	if (Err != 0)
	{
		printf("Failed To Open !");
		fclose(fptr);
		return -1;
	}
	if (fgets(data, 30, fptr) == NULL)
	{
		fclose(fptr);
		return -1;
	}
	while (data[i] != '\0')
	{
		if (data[i] >= 'a' && data[i] <= 'z')
		{
			j++;
		}
		i++;
	}
	fclose(fptr);
	return j;
}
int main()
{
	char FILENAME[20] = " ";
	int Ret = 0;

	printf("Enter The File Name => ");
	scanf_s("%s", FILENAME, 20);

	Ret = CountSmall(FILENAME);

	if (Ret > 0)
	{
		printf("Number Of Small Characters Are %d", Ret);
	}

	return 0;
}