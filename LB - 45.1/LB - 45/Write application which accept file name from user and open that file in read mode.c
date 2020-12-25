#include<stdio.h>

int main()
{
	FILE* ptr = NULL;
	char FNAME[20] = "\0";

	printf("Enter The File Name To Open The File => ");
	scanf_s("%[^.txt]s", FNAME, sizeof(FNAME));

	int err = fopen_s(&ptr,FNAME, "r");

	if (err != 0)
	{
		printf("File Does Not Created !");
	}
	else
	{
		printf("File Opened Succesfully");
	}
	fclose(ptr);
	return 0;

}
