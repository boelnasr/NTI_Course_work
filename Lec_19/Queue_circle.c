#include "../standard_types.h"
#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
    u32 data;
    struct node *next;
}node;

void insert_in_queue(node *rear,u16 val)
{
         node *tmp;
        tmp=( node *)malloc(sizeof(struct node));
        tmp->next=rear;
        if(tmp==NULL)
        {
                printf("\nMemory not available\n");
                return;
        }
 
        if( rear == NULL ) /*If queue is empty */
        {
                rear=tmp;
                tmp->next=rear;
        }
        else
        {
                tmp->next=rear->next;
                rear->next=tmp;
                rear=tmp;
        }
}

s32 peek(node *rear)
{
        if(rear == NULL  )
        {
                printf("\nQueue underflow\n");
               
        }
        return rear->next->data;
}
s32 isEmpty(node *rear)
{
        if( rear == NULL )
                return 1;
        else
                return 0;
}
 node* initialize(node *q)
{   q =(node*) malloc(sizeof(node));
    q =NULL;
    return q;
}
 
void display(node *rear)
{
        node *p;
        if(rear == NULL )
        {
                printf("\nQueue is empty\n");
                return;
        }
        printf("\nQueue is :\n");
        p=rear->next;
        do
        {
                printf("%d ",p->data);
                p=p->next;
        }while(p!=rear->next);
        printf("\n");
}
int dequeue(node *rear)
{   u16 val;
    node *tmp;
    if( rear == NULL  )
        {     
           printf("\nQueue underflow\n");
            exit(1);
        }
        if(rear->next==rear)  /*If only one element*/
        {
            tmp=rear;
            rear=NULL;
        }
        else
        {
        tmp=rear->next;
        rear->next=rear->next->next;
        }
        val=tmp->data;
        free(tmp);
        return val;
}
int main()
{
    node *rear;
    rear=initialize(rear);
    insert_in_queue(rear,10);
    insert_in_queue(rear,20);
    insert_in_queue(rear,30);
    printf("Queue before dequeue\n");
    display(rear);
    peek(rear);
    dequeue(rear);
    printf("Queue after dequeue\n");
    display(rear);
    return 0;
}