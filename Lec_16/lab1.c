#include <stdio.h> 
#include <stdlib.h> 
#include "../standard_types.h"

typedef struct Node 
{ 
s32 data; 
struct Node *next; 
}Node; 


Node * InsertAtStart( Node* Start, int new_data) 
{ 	Node* new_node = ( Node*) malloc(sizeof(struct Node)); 
	new_node->data = new_data; 	
	new_node->next = Start; 
	Start = new_node; 
    if (new_node!=NULL)
    {printf("Error");    }
    return new_node;
    
} 

void InsertAtEnd( Node** head_ref, int new_data) 
{ 	Node* new_node = ( Node*) malloc(sizeof( Node)); 
	Node *last = *head_ref; 
	new_node->data = new_data; 
	new_node->next = NULL; 
	if (*head_ref == NULL) 
	{ 
	*head_ref = new_node; 

	} 
	while (last->next != NULL) 
	last = last->next; 
	last->next = new_node;
     }

void InsertAfter( Node* prev_node, u16 new_data) 
{ 	if (prev_node == NULL) 
	{ 
	printf("the given previous node cannot be NULL"); 
	} 
	Node* new_node =( Node*) malloc(sizeof( Node)); 
	new_node->data = new_data; 
	new_node->next = prev_node->next; 
	prev_node->next = new_node; 
} 
Node * InsertBefor( Node *start, Node* prev_node, u16 new_data){
    Node* new_node =( Node*) malloc(sizeof( Node)); 
    new_node->data = new_data;
    if(prev_node == NULL)
        printf("Error");
    new_node->data = prev_node->data;
    new_node->next = prev_node->next;
    prev_node->data = new_node;


  return prev_node;
}
int main() 
{ 

 Node* head = NULL; 

InsertAtStart(&head, 1); 



return 0; 
} 
