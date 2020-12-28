#include <stdio.h>
#include <stdlib.h>
#include "../standard_types.h"
#define max 50
typedef struct Stack {
	u16 top;
	u16 array[max];
}Stack;

Stack* int_stack(Stack*stack)
{
    stack->top=-1;
}
Stack* size_stack(Stack*stack){
    printf("size is %d",stack->top);
}

int isFull(struct Stack* stack)
{
	return stack->top == stack->top - 1;
}

int isEmpty(struct Stack* stack)
{ 
	return stack->top == -1;
    

        
}


void push(struct Stack* stack, int item)
{
	if (isFull(stack))
		return;
	stack->array[++stack->top] = item;
	printf("%d pushed to stack\n", item);
}

int pop(struct Stack* stack)
{
	if (isEmpty(stack))
		printf("empty stack");
	return stack->array[stack->top--];
}


int peek(struct Stack* stack)
{
	if (isEmpty(stack))
			printf("empty stack");
	return stack->array[stack->top];
}
void Display_stack(Stack*stack)
{
int i;
    if (isEmpty(stack))
			printf("empty stack");
    else
    {
        printf ("\n The status of the stack is \n");
        for (i = stack->top; i >= 0; i--)
        {
            printf ("%d\n", stack->array[i]);
        }
    }
    printf ("\n");
}

int main()
{
	Stack* stack ;
    int_stack(stack);
   	push(stack, 10);
	push(stack, 20);
	push(stack, 30);
    size_stack(stack);
    Display_stack(stack);
	printf("%d popped from stack\n", pop(stack));

	return 0;
}
