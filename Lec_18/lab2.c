#include <stdio.h>
#include <stdlib.h>
#include "../standard_types.h"
#define TRUE 1
#define FALSE 0

typedef struct stack
{
    u16 data;
    struct stack *next;
}stack;




void initialize(stack*head)
{
    head = NULL;
}

stack * push  (u32 Data,stack * head)
{
	/* Create Node */
	stack * temp = (stack *)malloc(sizeof(stack));
	if(temp != NULL)
	{
		temp->data = Data;
		temp->next = head;
		head      = temp;
	}
    printf("push done\n");
	return head;
}

stack pop(stack*head)
{
    u16 n;
    if(head == NULL)
    {
        printf("the stack is empt");
    }
    n = head->data;
    head=head->next;
    printf("element poped from the stack is %u \n",n);
   
}

int Top(stack*head)
{
    return head->data;
}

int isempty(stack*head)
{
    return head==NULL;
}

void display(stack *head)
{
    if(head == NULL)
    {
        printf("NULL\n");
    }
    else
    {
        printf("%d\n", head -> data);
        display(head->next);
    }
}

int main()
{   stack * head;
    initialize(head);
    push(10,head);
    pop(head);
    push(20,head);
    push(30,head);
    printf("The top is %d\n",Top(head));
    pop(head);
    printf("The top after pop is %d\n",Top(head));
    display(head);
    return 0;
}