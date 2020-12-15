#include<stdio.h>
#include<malloc.h>
typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

struct Node{
	int Data;
	NODE* Next;
};

void InsertFirst(PPNODE Head, int iNo)
{
	PNODE Newn = NULL;
	
	Newn = (PNODE)malloc(sizeof(NODE));

	Newn->Data = iNo;
	Newn->Next = NULL;

	if (*Head == NULL)
	{
		*Head = Newn;
	}
	else
	{
		Newn->Next = *Head;
		*Head = Newn;
	}
}
void  SearchFirstOcc(PNODE First, int iNo)
{
	if (First == NULL)
	{
		printf("Linklist Is Empty");
	}
	else
	{
		int i = 1;
		while (First != NULL)
		{
			if (First->Data == iNo)
			{
				printf("First Occurrence Of %d At Position %d\n", iNo, i);
				break;
			}
			i++;
			First = First->Next;
		}
	}
}
void SearchLastOcc(PNODE First, int iNo)
{
	if (First == NULL)
	{
		printf("Linklist Is Empty ");
	}
	else
	{
		int i = 1,j=0;
		while (First != NULL)
		{
			if (First->Data == iNo)
			{
				j = i;
			}
			i++;
			First = First->Next;
		}
		if (j != 0)
		{
			printf("Last Occurrence Of %d At Position %d\n", iNo, j);
		}
		else
		{
			printf("%d Is Not Present In Linklist \n", iNo);
		}
	}
}
int Addition(PNODE First)
{
	int i = 0;
	while (First != NULL)
	{
		i += First->Data;
		First = First->Next;
	}
	return i;
}
int Maximum(PNODE First)
{
	int i = First->Data;

	while (First != NULL)
	{
		if (i < First->Data)
		{
			i = First->Data;
		}
		First = First->Next;
	}
	return i;
}
int Minimum(PNODE First)
{
	int i = First->Data;

	while (First != NULL)
	{
		if (i > First->Data)
		{
			i = First->Data;
		}
		First = First->Next;
	}
	return i;
}

int main()
{
	PNODE Head = NULL;
	int iRet = 0;

	InsertFirst(&Head, 20);
	InsertFirst(&Head, 50);
	InsertFirst(&Head, 10);
	InsertFirst(&Head, 40);
	SearchFirstOcc(Head, 40);
	SearchLastOcc(Head, 5);
	printf("Addition Of All Elements Is %d \n", Addition(Head));
	printf("Maximum Elements Is %d \n", Maximum(Head));
	printf("Minimum Elements Is %d \n", Minimum(Head));

	return 0;
}
