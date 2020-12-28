#include <stdio.h>
#include <stdlib.h>
#include "../standard_types.h"
typedef unsigned char       u8;
typedef signed char         s8;
typedef unsigned short int u16;
typedef signed short int   s16;
typedef unsigned long int  u32;
typedef signed long int    s32;
typedef float              f32;
typedef double             f64;
typedef long double        f128;

typedef struct node
{
	struct node * prev;
	s32 data;
	struct node * next;
}Node;

Node * CreateList(Node * Start);
void DisplayList(Node * Start);
Node * InsertInEmptyList(Node * Start,s32 Data);
Node * InsertInBeginning(Node * Start,s32 Data);
void InsertAtEnd(Node * Start,s32 Data);
void InsertAfter(Node * Start, s32 x,s32 Data);
Node * InsertBefore(Node * Start, s32 x, s32 Data);
Node * DeleteNode(Node * Start,s32 Data);
Node * ReverseList(Node * Start);

Node * CreateList(Node * Start)
{
	s32 n,Data,i;
	printf("Please Enter The number of nodes : ");
	scanf("%d",&n);
	
	Start = NULL;
	
	if(n == 0)
		return Start;
	
	printf("Enter The First element to be inserted : ");
	scanf("%d",&Data);
	Start = InsertInEmptyList(Start,Data);
	
	for(i = 2; i<=n ; i++)
	{
		printf("Please enter the next element to be inserted = ");
		scanf("%d",&Data);
		InsertAtEnd(Start,Data);
	}
	return Start;
}

Node * InsertInEmptyList(Node * Start,s32 Data)
{
	Node * temp = (Node*)malloc(sizeof(Node));
	
	temp -> data = Data;
	temp -> prev = NULL;
	temp -> next = NULL;
	Start        = temp;
	
	return Start;
}
Node * InsertInBeginning(Node * Start,s32 Data)
{
	Node * temp = (Node*)malloc(sizeof(Node));
	
	temp  ->  data = Data;
	temp  ->  prev = NULL;
	temp  ->  next = Start;
	Start ->  prev = temp;
	
	Start          = temp;
	
	return Start;
}
void InsertAtEnd(Node * Start,s32 Data)
{
	Node * temp,*p;
	temp = (Node *)malloc(sizeof(Node));
	
	temp -> data = Data;
	
	p = Start;
	while(p->next != NULL)
	{
		p = p->next;
	}
	p->next = temp;
	temp -> next = NULL;
	temp -> prev = p;
}
void InsertAfter(Node * Start, s32 x,s32 Data)
{
	Node * temp,*p;
	temp = (Node *)malloc(sizeof(Node));
	
	temp -> data = Data;
	
	p = Start;
	while((p!=NULL) && (p->data != x))
	{
		p=p->next;
	}
	if(p == NULL)
	{
		printf("%d not present in the List",x);
	}
	else
	{
		temp -> prev = p;
		temp -> next = p -> next;
		if(p -> next != NULL)
		{
			p->next->prev = temp;
		}
		p->next = temp;
	}
}
Node * InsertBefore(Node * Start, s32 x, s32 Data)
{
	Node * temp,*p;
	if(Start == NULL)
	{
		printf("The List is empty\n");
		return Start;
	}
	if(Start->data == x)
	{
		Start = InsertInBeginning(Start,Data);
		return Start;
	}
	p = Start;
	while(p!=NULL)
	{
		if(p->data == x)
		{
			break;
		}
		p = p->next;
	}
	if(p == NULL)
	{
		printf("%d is not present at the List\n",x);
	}
	else
	{
		temp = (Node*)malloc(sizeof(Node));
		temp -> data = Data;
		
		temp -> prev = p->prev;
		temp -> next = p;
		p    -> prev->next = temp;
		p    -> prev       = temp;
	}
	return Start;
}

Node * DeleteNode(Node * Start,s32 Data)
{
	Node * temp;
	if(Start == NULL)
	{
		printf("The List is empty\n");
		return Start;
	}
	
	if(Start->next == NULL)
	{
		if(Start->data == Data)
		{
			temp = Start;
			Start = NULL;
			free(temp);
		}
		else
		{
			printf("The Value %d is not in the List\n",Data);
		}
		return Start;
	}
	
	if(Start->data == Data)
	{
		temp        = Start;
		Start       = Start->next;
		Start->prev = NULL;
		free(temp);
		return Start;
	}
	
	temp = Start->next;
	while(temp->next!=NULL)
	{
		if(temp->data == Data)
		{
			break;
		}
		temp = temp->next;
	}
	if(temp->next != NULL)
	{
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		free(temp);
	}
	else
	{
		if(temp->data == Data)
		{
			temp->prev->next = NULL;
			free(temp);
		}
		else
		{
			printf("%d value is not in the List\n",Data);
		}
	}
	return Start;
}