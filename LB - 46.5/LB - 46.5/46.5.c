#include<stdio.h>
void DisplayN(char FNAME[], int iNo)
{
	FILE* fptr = NULL;
	char Data[50] = " ";
	int Err = 0, i = 0;

	Err = fopen_s(&fptr, FNAME, "r");
	if (Err != 0)
	{
		printf("Failed To Open !");
	}
	if (fgets(Data, 50, fptr) != NULL)
	{
		while (Data[i] != '\0' && i < iNo)
		{
			printf("%c", Data[i]);
			i++;
		}
	}
	fclose(fptr);
}
int main()
{
	char FNAME[10] = " ";
	int iNo = 0;

	printf("Enter The Filename => ");
	scanf_s("%s", FNAME, 10);
	printf("Enter The Number Of CHaracters To Read => ");
	scanf_s("%d", &iNo, sizeof(iNo));

	DisplayN(FNAME, iNo);

	return 0;
}