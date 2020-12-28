#include<stdio.h>
#include<malloc.h>
#include "../standard_types.h"

typedef struct node
{
    int data;
    struct node * link;
}node;
void view_stack( node *);

node* Intialize_Stack(node*top)
{
    top=NULL;
    return top;
}

 node * push( node * top,int data)
{
    node * temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=top;
    top=temp;
    printf("%d is pushed\n",top->data);
    
    return top;
}
 node * pop(struct node * top)
{
    node * temp;
    temp=top;
    if(top==NULL)
    {
            printf("Stack Empty!Nothing To Pop\n");
            return 0;
    }
    else{
    top=top->link;
    printf("%d is popped\n",temp->data);
    free(temp);
    view_stack(top);
    return top;}
}
void peek(struct node * top)
{
    if(top==NULL)
    {
        printf("Stack Empty\n");
    }
    else
    {
        printf("Top Item=%d \n",top->data);
    }

}
void view_stack( node* top)
{
    struct node* temp=top;
    printf("Your Current Stack:\n");
    printf("       \n");
    while(temp!=NULL)
    {
    printf("%d-> ",temp->data);
    temp=temp->link;
    }
    printf("NULL\n");
}

void Count_Stack(node*top)
{
	s32 counter=0;
	node * p = top;
	while(p!=NULL)
	{
		counter++;
		p=p->link;
	}
	printf("Number of nodes in the List = %d\n",counter);

}
// int isFull( node*top)
// {
// 	if(top->link == top->link-1)
//         printf("Stack is Full");  
// }

void isEmpty( node*top)
{ 
	if(top == NULL)
        printf("Stack is Empty");
    else
        printf("Stack Isn't empty\n");    

        
}
void dispose(node *head)
{
    node *cursor, *tmp;
 
    if(head != NULL)
    {
        cursor = head->link;
        head->link = NULL;
        while(cursor != NULL)
        {
            tmp = cursor->link;
            free(cursor);
            cursor = tmp;
        }
    }
}
//Driver Program...
int main()
{
    node  *top;
    top=Intialize_Stack(top);
    top=push(top,5);
    top=push(top,6);
    isEmpty(top);
    top=push(top,7);
    top=push(top,8);
    top=push(top,9);
    Count_Stack(top);
    peek(top);
    top=pop(top);
    view_stack(top);
    dispose(top);
    isEmpty(top);
}