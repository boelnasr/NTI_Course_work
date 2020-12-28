#include<stdio.h>
#include<malloc.h>
#include "../standard_types.h"
#define Max 20
typedef struct Q{
	s32 front;
	s32 arr[Max];
    s32 rear;
}Queue;

void Init_qeue(Queue * q){
    q->front=-1;    
    q->rear=-1;
}
s32  Queue_IsFull(Queue * q)
{
	if(q != NULL)
	{
		if(q->rear == (Max - 1))
		{
			printf("queue is full");
            return 1;
		}
	}
	
}
s32 Queue_IsEmpty(Queue * q)
{
    if (q->front==-1||q->front==q->rear-1)
    {
        printf("Queue is empty");
        return 1;
    }
    
}
void insert(Queue * q)
{
    int add_item;
    if (Queue_IsFull(q))
    printf("Queue Overflow \n");
    else
    {
        if (q->front == - 1)
        q->front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &add_item);
        q->rear = q->rear + 1;
        q->arr[q->rear] = add_item;
    }
}
