#include <stdio.h>
#include <stdlib.h>
#include "../standard_types.h"

typedef struct node
{
    int data;
    struct node* next;
    struct node* prev;
} node;
/*
    create a new node
    initialize the data and next field
 
    return the newly created node
*/
node* create(u16 data,node* next)
{
    node* new_node = (node*)malloc(sizeof(node));
    if(new_node == NULL)
    {
        printf("Error creating a new node.\n");
        exit(0);
    }
    new_node->data = data;
    new_node->next = next;
 
    return new_node;
}
/*
    add a new node at the beginning of the list
*/
node* InsertAtStart(node* head,u16 data)
{
    node* new_node = create(data,head);
    new_node->prev=NULL;
    head = new_node;
    return head;
}
 
/*
    add a new node at the end of the list
*/
node* InsertAtEnd(node* head, u16 data)
{
    if(head == NULL)
        return NULL;
    /* go to the last node */
    node *cursor = head;
    while(cursor->next != NULL)
        cursor = cursor->next;
 
    /* create a new node */
    node* new_node =  create(data,NULL);
    cursor->next = new_node;
 
    return head;
}

/*
    insert a new node after the prev node
*/
node* insert_after(node *head, u16 data, node* prev)
{
    if(head == NULL || prev == NULL)
        return NULL;
    /* find the prev node, starting from the first node*/
    node *cursor = head;
    while(cursor != prev)
        cursor = cursor->next;
 
    if(cursor != NULL)
    {
        node* new_node = create(data,cursor->next);
        cursor->next = new_node;
        return head;
    }
    else
    {
        return NULL;
    }
}
node* creat_list(node *head)
{   u16 n,i=0,x;
    node *tmp;
    printf("enter the number of the element: ");
    scanf("%d",&n);
    printf("enter the first element");
    scanf("%d",&x);
    head=InsertAtStart(head,x);
    for(i=1; i<n; i++)
    {   printf(" Input data for node %d : ", i+1);
        scanf("%d",&x);
        InsertAtEnd(head,x);
        
    }
    return head;
}
/*
    insert a new node before the nxt node
*/
node* insert_before(node *head, u16 data, node* nxt)
{
    if(nxt == NULL || head == NULL)
        return NULL;
 
    if(head == nxt)
    {
        head = InsertAtStart(head,data);
        return head;
    }
 
    /* find the prev node, starting from the first node*/
    node *cursor = head;
    while(cursor != NULL)
    {
        if(cursor->next == nxt)
            break;
        cursor = cursor->next;
    }
 
    if(cursor != NULL)
    {
        node* new_node = create(data,cursor->next);
        cursor->next = new_node;
        return head;
    }
    else
    {
        return NULL;
    }
}
 
/*
    remove node from the front of list
*/
node* remove_front(node* head)
{
    if(head == NULL)
        return NULL;
    node *front = head;
    head = head->next;
    front->next = NULL;
    /* is this the last node in the list */
    if(front == head)
        head = NULL;
    free(front);
    return head;
}
 
/*
    remove node from the back of the list
*/
node* remove_back(node* head)
{
    if(head == NULL)
        return NULL;
 
    node *cursor = head;
    node *back = NULL;
    while(cursor->next != NULL)
    {
        back = cursor;
        cursor = cursor->next;
    }
 
    if(back != NULL)
        back->next = NULL;
 
    /* if this is the last node in the list*/
    if(cursor == head)
        head = NULL;
 
    free(cursor);
 
    return head;
}
 
/*
    remove a node from the list
*/
node* remove_any(node* head,node* nd)
{
    if(nd == NULL)
        return NULL;
    /* if the node is the first node */
    if(nd == head)
        return remove_front(head);
 
    /* if the node is the last node */
    if(nd->next == NULL)
        return remove_back(head);
 
    /* if the node is in the middle */
    node* cursor = head;
    while(cursor != NULL)
    {
        if(cursor->next == nd)
            break;
        cursor = cursor->next;
    }
 
    if(cursor != NULL)
    {
        node* tmp = cursor->next;
        cursor->next = tmp->next;
        tmp->next = NULL;
        free(tmp);
    }
    return head;
 
}
/*
    display a node
*/
void printList(node* head)
{   
    node* temp = head;
    while (temp != NULL) {
        printf("%d \n ", temp->data);
        temp = temp->next;
    }
}
node* search(node* head,int data)
{
 
    node *cursor = head;
    while(cursor!=NULL)
    {
        if(cursor->data == data)
            return cursor;
        cursor = cursor->next;
    }
    return NULL;
}
 
/*
    remove all element of the list
*/
void dispose(node *head)
{
    node *cursor, *tmp;
 
    if(head != NULL)
    {
        cursor = head->next;
        head->next = NULL;
        while(cursor != NULL)
        {
            tmp = cursor->next;
            free(cursor);
            cursor = tmp;
        }
    }
}
/*
    return the number of elements in the list
*/
int count(node *head)
{
    node *cursor = head;
    int c = 0;
    while(cursor != NULL)
    {
        c++;
        cursor = cursor->next;
    }
    return c;
}

/*
    reverse the linked list
*/

void reverseList( node **head) 
{
    // Temporary helper variables
    struct node *prev, *cur, *next, *last;

    // Cannot reverse empty list
    if (*head == NULL)
    {
        printf("Cannot reverse empty list.\n");
        return;
    }


    // Head is going to be our last node after reversing list
    last = *head;

    prev  = *head;
    cur   = (*head)->next;
    *head = (*head)->next;

    // Iterate till you reach the initial node in circular list
    while (*head != last)
    {
        *head = (*head)->next;
        cur->next = prev;

        prev = cur;
        cur  = *head;
    }

    cur->next = prev;
    *head = prev;       // Make last node as head
}    
 void printNthFromLast(node* head, int n) 
{ 
    int len = 0, i; 
    node* temp = head; 
  
    // count the number of nodes in Linked List 
    len=count(head);
  
    // check if value of n is not 
    // more than length of the linked list 
    if (len < n) 
        return; 
  
    temp = head; 
  
    // get the (len-n+1)th node from the beginning 
    for (i = 1; i < len - n + 1; i++) 
        temp = temp->next; 
  
    printf("the required elemint: %d",temp->data); 
  
    return; 
}

int main()
{
    node* head=NULL;
    node* tmp = head;
    head=creat_list(head);
	printList(head);
    reverse(&head);
	printList(head);
	head=InsertAtStart(head,111);
    printList(head);
return 0;
    }
