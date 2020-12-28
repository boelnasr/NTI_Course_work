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

#define MAX             10
#define STACK_FULL      1
#define STACK_EMPTY     2
#define STACK_OK        3

typedef struct s16{
	s32 top;
	s32 arr[MAX];
}Stack;

void InitStack(Stack * S);
s32  StackIsEmpty(Stack * S);
s32  StackIsFull(Stack * S);
s32  StackSize(Stack * S);
void PushIntoStack(Stack * S,s32 Data);
s32  PopFromStack(Stack * S);
s32  PeekFromStack(Stack * S);
void DisplayStack(Stack * S);

void main(void)
{
	s32 value;
	/* Create Ob of Stack */
	Stack S1;
	InitStack(&S1);
	
	/* Push into Stack */
	PushIntoStack(&S1,50);
	PushIntoStack(&S1,30);
	PushIntoStack(&S1,20);
	PushIntoStack(&S1,10);
	
	DisplayStack(&S1);
	
	value = PopFromStack(&S1);
	printf("%d value\n",value);
	
	DisplayStack(&S1);
}

void InitStack(Stack * S)
{
	if(S != NULL)
	{
		S->top = -1;
	}
}
s32  StackIsEmpty(Stack * S)
{
	s32 ReturnValue = STACK_OK;
	if(S != NULL)
	{
		if(S->top == -1)/* Stack is Empty */
		{
			ReturnValue = STACK_EMPTY;
		}
	}
	return ReturnValue;
}
s32  StackIsFull(Stack * S)
{
	s32 ReturnValue = STACK_OK;
	if(S != NULL)
	{
		if(S->top == (MAX - 1))
		{
			ReturnValue = STACK_FULL;
		}
	}
	return ReturnValue;
}
s32  StackSize(Stack * S)
{
	s32 ReturnValue;
	if(S != NULL)
	{
		ReturnValue = S->top +1;
	}
	return ReturnValue;
}
void PushIntoStack(Stack * S,s32 Data)
{
	s32 State = STACK_OK;
	if(S != NULL)
	{
		State = StackIsFull(S);
		if(State == STACK_OK)
		{
			S->top = S->top + 1;
			S->arr[S->top] = Data;
		}
		else if(State == STACK_FULL)
		{
			printf("Stack is Full\n");
		}
	}
}
s32  PopFromStack(Stack * S)
{
	s32 State = STACK_OK,value;
	if(S != NULL)
	{
		State = StackIsEmpty(S);
		if(State == STACK_EMPTY)
		{
			printf("Stack is Empty\n");
		}
		else if(State == STACK_OK)
		{
			value = S->arr[S->top];
			S->top = S->top - 1 ;
		}
	}
	return value;
}
s32  PeekFromStack(Stack * S)
{
	s32 State = STACK_OK,value;
	if(S != NULL)
	{
		State = StackIsEmpty(S);
		if(State == STACK_EMPTY)
		{
			printf("Stack is Empty\n");
		}
		else if(State == STACK_OK)
		{
			value = S->arr[S->top];
		}
	}
	return value;
}
void DisplayStack(Stack * S)
{
	s32 i;
	if(S != NULL)
	{
		for(i = S->top ; i>=0 ; i--)
		{
			printf("The Value of %d element in the Stack = %d\n",i+1,S->arr[i]);
		}
	}
}