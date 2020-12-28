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

typedef struct node
{
	s32 Info;
	struct node * Link;
}Node;

Node * CreateList         (Node * Last);
void   DisplayList        (Node * Last);
Node * InsertInEmptyList  (Node * Last,s32 Data);
Node * InsertInBeginning  (Node * Last,s32 Data);
Node * InsertAtEnd        (Node * Last,s32 Data);
Node * InsertAfter        (Node * Last,s32 Data,s32 x);
Node * DeleteNode         (Node * Last,s32 Data);

Node * InsertInEmptyList  (Node * Last,s32 Data)
{
	Node * temp;
	temp       = (Node*)malloc(sizeof(Node));
	temp->Info = Data;
	
	Last       = temp;
	Last->Link = Last;
	
	return Last;
}
Node * InsertInBeginning  (Node * Last,s32 Data)
{
	Node * temp;
	if(Last != NULL)
	{
		temp       = (Node*)malloc(sizeof(Node));
		temp->Info = Data;	

		temp->Link = Last->Link;
		Last->Link = temp;
	}
	return Last;
}

Node * InsertAtEnd        (Node * Last,s32 Data)
{
	Node * temp;
	temp       = (Node*)malloc(sizeof(Node));
	temp->Info = Data;
	
	temp->Link = Last->Link;
	Last->Link = temp;
	Last       = temp;
	
	return Last;
}

Node * InsertAfter        (Node * Last,s32 Data,s32 x)
{
	Node * p,*temp;
	p = Last->Link;
	
	do{
		if(p->Info == x)
		{break;}
		p = p->Link;
	}while(p!=Last->Link);
	if(p == Last->Link && p->Info != x)
	{
		printf("%d value is not in the List \n",x);
	}
	else{
		temp       = (Node*)malloc(sizeof(Node));
		temp->Info = Data;
		
		temp->Link = p->Link;
		p   ->Link = temp;
		
		if(p == Last)
		{
			Last = temp;
		}
	}
	return Last;
}

Node * DeleteNode         (Node * Last,s32 Data)
{
	Node * temp,*p;
	if(Last == NULL)
	{
		printf("The List is Empty\n");
		return Last;
	}
	
	/* Deletion of only Node */
	if(Last->Link == Last && Last->Info == Data)
	{
		temp = Last;
		Last = NULL;
		free(temp);
		return Last;
	}
	else if(Last->Link == Last && Last->Info != Data)
	{
		printf("%d value is not in the List\n",Data);
		return Last;
	}
	/* Deletion of Fisrt Node */
	if(Last->Link->Info == Data)
	{
		temp       = Last->Link;
		Last->Link = temp->Link;
		free(temp);
		return Last;
	}
	
	p = Last->Link;
	while(p->Link != Last)
	{
		if(p->Link->Info == Data)
		{break;}
		p = p->Link;
	}
	
	if(p->Link != Last)/* Delete Node in between Nodes */
	{
		temp = p->Link;
		p->Link = temp -> Link;
		free(temp);
	}
	else
	{
		if(Last->Info == Data)/* Node to be deleted is the Last Node */
		{
			temp = Last;
			p->Link = Last->Link;
			Last = p;
			free(temp);
		}
		else
		{
			printf("%d value is not in the List\n",Data);
		}
	}
	return Last;
}
