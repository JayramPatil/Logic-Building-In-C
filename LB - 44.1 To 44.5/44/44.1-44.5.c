#include<stdio.h>
#include<malloc.h>

typedef struct {
	int Data;
	struct NODE* Next;
}NODE;

typedef NODE* PNODE;
typedef NODE** PPNODE;

void InsertFirst(PPNODE First,int iNo)
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
}
void Reverse(PNODE First)
{
	int iNo = 0, Rev = 0, n1 = 0;

	while (First != NULL)
	{
		iNo = First->Data;
		printf("Reverse Of ");
		n1=printf("%d Is",First->Data);
		while (iNo>0)
		{
			Rev = (Rev * 10) + iNo % 10;
			iNo = iNo / 10;
		}
		printf(" %0*d\n",n1-3, Rev);
		Rev = 0;
		First = First->Next;
	}

}
void DisplayPalindrome(PNODE First)
{
	while (First != NULL)
	{
		int iNo = First->Data,Rev=0;
		while (iNo > 0)
		{
			Rev = (Rev * 10) + iNo % 10;
			iNo = iNo / 10;
		}
		if (First->Data == Rev)
		{
			printf("%d Is Palindrome\n", Rev);
		}
		First = First->Next;
	}
}
void DisplayProduct(PNODE First)
{
	while (First != NULL)
	{
		int iNo = First->Data, Product = 1;
		while (iNo > 0)
		{
			Product = Product * ((iNo % 10 == 0) ? 1 : iNo % 10);
			iNo = iNo / 10;
		}
		printf("Product Of %d Is %d\n",First->Data, Product);
		First = First->Next;
	}
}
void DisplaySmall(PNODE First)
{
	while (First != NULL)
	{
		int Small = 0, iNo = First->Data;
		while (iNo > 0)
		{
			if (Small > iNo % 10 || iNo==First->Data)
			{
				Small = iNo % 10;
			}
			iNo /= 10;
		}
		printf("Smallest Digit Of %d Is %d\n",First->Data, Small);
		First = First->Next;
	}
}
void DisplayLarge(PNODE First)
{
	while (First != NULL)
	{
		int Large = 0, iNo = First->Data;
		while (iNo > 0)
		{
			if (Large < iNo % 10 || iNo == First->Data)
			{
				Large = iNo % 10;
			}
			iNo /= 10;
		}
		printf("Largest Digit Of %d Is %d\n",First->Data, Large);
		First = First->Next;
	}
}
int main()
{
	PNODE Head = NULL;
	
	InsertFirst(&Head, 11);
	InsertFirst(&Head, 23);
	InsertFirst(&Head, 30);
	InsertFirst(&Head, 88);
	InsertFirst(&Head, 56);

	Reverse(Head);
	DisplayPalindrome(Head);
	DisplayProduct(Head);
	DisplaySmall(Head);
	DisplayLarge(Head);

	free(Head);

	return 0;
}