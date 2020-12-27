#include<stdio.h>

int main()
{
	FILE* fptr = NULL;
	char FNAME[10] = "\0";
	int err = 0;

	printf("Enter The Filename To Read Its Data => ");
	scanf_s("%s", FNAME, 10);

	err = fopen_s(&fptr, FNAME, "r");

	if (err != 0)
	{
		printf("File Does Not Opened !");
	}
	else
	{
		char ch = ' ';

		ch = fgetc(fptr);
		while (ch != EOF)
		{
			printf("%c", ch);
			ch = fgetc(fptr);
		}

	}
	fclose(fptr);
	return 0;
}