#include <stdio.h>
#include <stdlib.h>

typedef unsigned char       u8;
typedef signed char         s8;
typedef unsigned short int u16;
typedef signed short int   s16;
typedef unsigned long int  u32;
typedef signed long int    s32;
typedef float              f32;
typedef double             f64;
typedef long double        f128;

typedef struct stack
{
	s32 data;
	struct stack * next;
}Node;

Node * CreateList         (Node * Start);
void   DisplayList        (Node * Start);
s32    CountNodes         (Node * Start);
void   Search             (Node * Start,s32 x);
Node * InsertInBeginning  (Node * Start,s32 Data);
void   InsertAtEnd        (Node * Start, s32 Data);
void   InsertAfter        (Node * Start,s32 x,s32 Data);
Node * InsertBefore       (Node * Start,s32 x,s32 Data);
Node * InsertAtPosition   (Node * Start,s32 Data,s32 Pos);
Node * DeleteNode         (Node * Start,s32 Data);
Node * ReverseList        (Node * Start);

void main(void)
{
	Node * Start1 = NULL;
	Start1 = CreateList(Start1);
	Start1=InsertInBeginning(Start1,953);
	DisplayList(Start1);
}


Node * CreateList         (Node * Start)
{
	s32 n,Data,i;
	Node *prev;
	printf("Enter the number of nodes : ");
	scanf("%d",&n);
	
	if(0 == n)
	{
		return Start;
	}
	
	printf("Please Enter the first element to be inserted : ");
	scanf("%d",&Data);
	Start = InsertInBeginning(Start,Data);
	prev =Start;
	
	for(i = 2; i<= n ;i++)
	{
		printf("Please Enter the next element to be inserted : ");
		scanf("%d",&Data);
		InsertAtEnd(Start,Data);
		if (i==n-1)
		{		}
		
	}
	return Start;
}

Node * InsertInBeginning  (Node * Start,s32 Data)
{
	/* Create Node */
	Node * temp = (Node *)malloc(sizeof(Node));
	if(temp != NULL)
	{
		temp->data = Data;
		temp->next = Start;
		Start      = temp;
	}
	return Start;
}
void   InsertAtEnd        (Node * Start, s32 Data)
{
	Node * p ;
	/* Create Node */
	Node * temp = (Node *)malloc(sizeof(Node));
	if(temp != NULL)
	{
		temp->data = Data;
		
		p = Start;
		while(p->next != NULL)
		{
			p = p->next;
		}
		/* Insert Node At the end */
		p   ->next = temp;
		temp->next = NULL;
	}
}
void   InsertAfter  (Node * Start,s32 x,s32 Data)
{
	Node * temp,*p;
	p = Start;
	
	while(p!=NULL)
	{
		if(p->data == x)
		{ break; }
		p = p->next;
	}
	if(p == NULL)
	{
		printf("The value %d is not in the List \n",x);
	}
	else
	{
		temp        = (Node *)malloc(sizeof(Node));
		temp->data  = Data;
		temp->next  = p->next;
		p->next     = temp;
	}
}
Node * InsertBefore       (Node * Start,s32 x,s32 Data)
{
	Node * temp,*p;
	if(Start == NULL)
	{
		printf("List is empty\n");
		return Start;
	}
	/* if x is in the first node, insert node at the beginning of the list */
	if(Start->data == x)
	{
		Start = InsertInBeginning(Start,Data);
		return Start;
	}
	/* Find pointer to predecessor of the node containing x */
	p = Start;
	while(p->next != NULL)
	{
		if(p->next->data == x)
		{
			break;
		}
		p = p->next;
	}
	if(p->next == NULL)
	{
		printf("The Value %d is not in the List\n",x);
	}
	else
	{
		temp       = (Node*)malloc(sizeof(Node));
		temp->data = Data;
		temp->next = p->next;
		p->next    = temp;
	}
	return Start;
}
Node * InsertAtPosition   (Node * Start,s32 Data,s32 Pos)
{
	Node * temp, *p;
	s32 i;
	if(Pos == 1)/* Insert At the beginning */
	{
		Start = InsertInBeginning(Start,Data);
		return Start;
	}
	p = Start;
	for(i = 1;(i<Pos-1) && (p!=NULL);i++)
	{
		p = p->next;
	}
	if(p == NULL)
	{
		printf("You can insert only upto %d th position \n",i);
	}
	else
	{
		temp       = (Node *)malloc(sizeof(Node));
		temp->data = Data;
		temp->next = p->next;
		p->next    = temp;
	}
	return Start;
}
void   DisplayList        (Node * Start)
{
	Node * p;
	if(Start == NULL)
	{
		printf("List is empty\n");
		return;
	}
	printf("List is : ");
	p = Start;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p = p->next;
	}
	printf("\n");
}
s32    CountNodes         (Node * Start)
{
	s32 counter=0;
	Node * p = Start;
	while(p!=NULL)
	{
		counter++;
		p=p->next;
	}
	printf("Number of nodes in the List = %d\n",counter);
	return counter;
}

void   Search             (Node * Start,s32 x)
{
	Node * p;
	s32 counter=0;
	/*if(Start == NULL)
	{
		printf("List is empty\n");
		return;
	}*/
	p = Start;
	while((p!=NULL) &&(p->data != x))
	{
		counter++;
		p=p->next;
	}
	if(p == NULL)
	{
		printf("The value %d is not at the List\n",x);
	}
	else
	{
		printf("The value %d is at %d th position at the List",x,counter);
	}
}

Node * DeleteNode         (Node * Start,s32 Data)
{
	Node * temp,*p;
	if(Start == NULL)/* List is empty */
	{
		printf("List is empty \n");
		return Start;
	}
	/* Delete the first Node at the List */
	if(Start->data == Data)
	{
		temp  = Start;
		Start = Start->next;
		free(temp);
		return Start;
	}
	/* Delete in between the Nodes or at the end */
	p = Start;
	while(p->next != NULL)
	{
		if(p->next->data == Data)
		{
			temp = p->next;
			break;
		}
		p = p->next;
	}
	if(p->next == NULL)
	{
		printf("Element of the value %d is not in the List\n",Data);
	}
	else
	{
		p->next = temp -> next;
		free(temp);
	}
	return Start;
}
Node * ReverseList        (Node * Start)
{
	Node * prev,*ptr,*next;
	prev = NULL;
	ptr  = Start;
	while(ptr != NULL)
	{
		next      = ptr->next;
		ptr->next = prev;
		prev      = ptr;
		ptr       = next;
	}
	Start = prev;
	
	return Start;
}