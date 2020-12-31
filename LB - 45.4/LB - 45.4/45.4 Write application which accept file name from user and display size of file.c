#include<stdio.h>

int main()
{
	FILE* fptr = NULL;
	char FNAME[20] = "\0";
	int i = 0, Err = 0;

	printf("Enter The Filename To Know Its Size => ");
	scanf_s("%s", FNAME, sizeof(FNAME));

	Err = fopen_s(&fptr, FNAME, "r");

	if (Err != 0)
	{
		printf("File Does Not Opened !");
	}
	else
	{
		fseek(fptr, 0L, SEEK_END);
		long int i = ftell(fptr);
		printf("Size Of %s Is %ld Bytes", FNAME, i);
	}
	fclose(fptr);
	return 0;
}