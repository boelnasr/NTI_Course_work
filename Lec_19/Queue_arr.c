#include <stdio.h>
#include<malloc.h>
#include "../standard_types.h"
#define MAXSIZE 10

typedef struct queue{
	s32 front;
	s32 arr[MAXSIZE];
    s32 rear;
    s32 size;
}queue;


void Init_qeue(queue * q){
    
    q->front=-1;    
    q->rear=-1;
    q->size=0;
    printf("-------------Intialization done-------------\n");

   
}
int isempty(queue * q)
{
    if(q->size<0)
        printf("Queue is full");
    
}

int isfull(queue * q)
{
    if(q->size == MAXSIZE)
        printf("Queue is full");
}

void enqueue(queue * q,int value)
{
    if(q->size<MAXSIZE)
    {
        if(q->size<0)
        {
            q->arr[0]  = value;
            q->front = q->rear = 0;
            q->size = 1;
        }
        else if(q->rear == MAXSIZE-1)
        {
            q->arr[0] = value;
            q->rear = 0;
            q->rear++;
        }
        else
        {
            q->arr[q->rear+1] = value;
            q->rear++;
            q->size++;
        }
    }
    else
    {
        printf("Queue is full\n");
    }
}

void dequeue(queue * q)
{
    if(q->size<0)
    {
        printf("Queue is empty\n");
    }
    else
    {
        q->size--;
        q->front++;
    }
}

int peek(queue * q)
{
    printf("The Front of the Queue is: d" ,q->arr[q->front]);
}
int getRear(queue * q)
{
    printf("The Front of the Queue is: d" ,q->arr[q->rear]);
}

void display(queue * q)
{
    int i;
    if(q->rear>=q->front)
    {
        for(i=q->front;i<=q->rear;i++)
        {
            printf("%d\n",q->arr[i]);
        }
    }
    else
    {
        for(i=q->front;i<MAXSIZE;i++)
        {
            printf("%d\n",q->arr[i]);
        }
        for(i=0;i<=q->rear;i++)
        {
            printf("%d\n",q->arr[i]);
        }
    }
}
void dispose(queue*q){
    q->front=-1;    
    q->rear=-1;
    q->size=0;
}
int main()
{   queue  q;
    Init_qeue(&q);
    enqueue(&q,4);
    enqueue(&q,8);
    enqueue(&q,10);
    enqueue(&q,20);
    display(&q);
    dequeue(&q);
    printf("After dequeue\n");
    display(&q);
    enqueue(&q,50);
    enqueue(&q,60);
    enqueue(&q,70);
    enqueue(&q,80);
    dequeue(&q);
    enqueue(&q,90);
    enqueue(&q,100);
    enqueue(&q,110);
    enqueue(&q,120);
    printf("After enqueue\n");
    display(&q);
    return 0;}