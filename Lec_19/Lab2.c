#include "../standard_types.h"
#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
    u32 data;
    struct node *next;
}node;

typedef struct queue
{
    u16 count;
    node *front;
    node *rear;
}queue;

queue* initialize(queue *q)
{   q =(queue*) malloc(sizeof(queue));
    q->count = 0;
    q->front = NULL;
    q->rear = NULL;
    return q;
}

int isempty(queue *q)
{
    return (q->rear == NULL);
}

void insert_in_queue(queue *q, int value)
{       node *tmp;
        tmp = malloc(sizeof(node));
        tmp->data = value;
        tmp->next = NULL;
        if(!isempty(q))
        {
            q->rear->next = tmp;
            q->rear = tmp;
        }
        else
        {
            q->front = q->rear = tmp;
        }
        q->count++;

}

int dequeue(queue *q)
{
    node *tmp;
    int n = q->front->data;
    tmp = q->front;
    q->front = q->front->next;
    q->count--;
    free(tmp);
    return(n);
}

void display(node *head)
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
void Size_of_queue(queue* q)
{
    printf("The size of the queue is %d\n",q->count);
}
void peek(queue * q)
{
    if(q==NULL)
    {
        printf("Stack Empty\n");
    }
    else
    {
        printf("Top Item= %d \n",q->front->data);
    }

}
int main()
{
    queue *q;
    q=initialize(q);
    insert_in_queue(q,10);
    insert_in_queue(q,20);
    insert_in_queue(q,30);
    printf("Queue before dequeue\n");
    display(q->front);
    Size_of_queue(q);
    peek(q);
    dequeue(q);
    printf("Queue after dequeue\n");
    display(q->front);
    return 0;
}