#include<stdio.h>

int main()
{
	FILE* fptr = NULL;
	char FNAME[20] = "\0";
	int err = 0;

	printf("Enter The File Name To Open The File In Write Mode => ");
	scanf_s("%s", FNAME, sizeof(FNAME));

	err = fopen_s(&fptr, FNAME, "w");

	(err == 0) ? printf("File Opened Successfully...") : printf("File Does Not Open !");

	fclose(fptr);

	return 0;
}