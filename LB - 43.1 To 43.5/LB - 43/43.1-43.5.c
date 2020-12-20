#include<stdio.h>
#include<malloc.h>

typedef struct {
	int Data;
	struct NODE* Next;
}NODE;

typedef NODE* PNODE;
typedef NODE** PPNODE;

void InsertFirst(PPNODE First, int iNo)
{
	PNODE Newn = NULL;

	Newn = (PNODE)malloc(sizeof(NODE));

	Newn->Data = iNo;
	Newn->Next = NULL;

	if (*First == NULL)
	{
		*First = Newn;
	}
	else
	{
		Newn->Next = *First;
		*First = Newn;
	}
	return;
}
void DisplayPerfect(PNODE First)
{
	while (First != NULL)
	{
		if (First->Data % 2 == 0)
		{
			printf("%d\n", First->Data);
		}
		First = First->Next;
	}
	return;
}
void DisplayPrime(PNODE First)
{
	while (First != NULL)
	{
		int i = 2;

		while (i <= (First->Data / 2))
		{
			if (First->Data % i == 0)
			{
				break;
			}
			i++;
		}
		if (i > First->Data / 2)
		{
			printf("%d\n", First->Data);
		}
		First = First->Next;
	}
	return;
}
void AdditionEven(PNODE First)
{
	int i = 0;

	while (First != NULL)
	{
		if (First->Data % 2 != 0)
		{
			i += First->Data;
		}
		First = First->Next;
	}
	printf("%d\n", i);
	return;
}
void SecMaximum(PNODE First)
{
	int Max1, Max2;

	Max2 = Max1 = First->Data;

	while (First != NULL)
	{
		if (First->Data > Max1)
		{
			Max2 = Max1;
			Max1 = First->Data;
		}
		else if (First->Data > Max2)
		{
			Max2 = First->Data;
		}
		First = First->Next;
	}
	printf("%d\n", Max2);
}
void SumDigit(PNODE First)
{
	while (First != NULL)
	{
		int Sum = 0, Num = 0;
		Num = First->Data;
		while (Num > 0)
		{
			Sum += Num % 10;
			Num = Num / 10;
		}
		printf(" %d ", Sum);
		First = First->Next;
	}
	return;
}

int main()
{
	NODE* Head = NULL;

	InsertFirst(&Head, 89);
	InsertFirst(&Head, 6);
	InsertFirst(&Head, 41);
	InsertFirst(&Head, 17);
	InsertFirst(&Head, 28);
	InsertFirst(&Head, 11);

	DisplayPerfect(Head);
	DisplayPrime(Head);
	AdditionEven(Head);
	SecMaximum(Head);
	SumDigit(Head);

	return 0;
}