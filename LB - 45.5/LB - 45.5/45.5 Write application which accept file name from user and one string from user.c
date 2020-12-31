#include<stdio.h>

int main()
{
	FILE* fptr = NULL;
	char FNAME[10] = " ", str[50] = " ";
	int Err = 0;

	printf("Enter The File Name To Open The File => ");
	scanf_s("%[^\n]s", FNAME, 10);

	Err = fopen_s(&fptr, FNAME, "a");

	if (Err != 0)
	{
		printf("File Filed To Open !");
	}
	else
	{
		printf("Enter The String To Add To The File => ");
		scanf_s(" %[^\n]s", str, 50);
		fputs(str, fptr);
	}
	fclose(fptr);
	return 0;
}