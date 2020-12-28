#include <stdio.h>
#include <stdlib.h>
#include "../standard_types.h"
typedef struct node
{
    int data;
    struct node* next;
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
    head= create(data,head);
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
    while(cursor->next != head)
        cursor = cursor->next;
 
    /* create a new node */
    node* new_node =  create(data,NULL);
    cursor->next = new_node;
 
    return head;
}
 node* search(node* head,int data)
{
    node *cursor = head;
    do
    {
        if(cursor->data == data)
            return cursor;
        cursor = cursor->next;
    }while(cursor!=head);
    return NULL;
}
/*
    insert a new node after the prev node
*/
node* insert_after(node *head, u16 data,u16 x)
{   
    node* prev=search(head,x);
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

/*
    insert a new node before the nxt node
*/
node* insert_before(node *head, u16 data,u16 x)
{    node* nxt=search(head,x);
    if(nxt == NULL || head == NULL)
        return NULL;
 
    if(head == nxt)
    {
        head = InsertAtStart(head,data);
        return head;
    }
 
    /* find the prev node, starting from the first node*/
    node *cursor = head;

    do
    {
        if(cursor->next == nxt)
            break;
        cursor = cursor->next;
    }while(cursor != head);
 
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
    do
    {
        back = cursor;
        cursor = cursor->next;
    }while(cursor->next != head);
 
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
node* remove_any(node* head,u16 x)
{   node* nd=NULL;
    //nd= search(head,x);
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
    do
    {
        if(cursor->next == nd)
            break;
        cursor = cursor->next;
    }while(cursor != head);
 
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
    remove all element of the list
*/
void dispose(node *head)
{
    node *cursor, *tmp;
 
    if(head != NULL)
    {
        cursor = head->next;
        head->next = NULL;
         do
        {
            tmp = cursor->next;
            free(cursor);
            cursor = tmp;
        }while(cursor != head);
    }
}
/*
    return the number of elements in the list
*/
int count(node *head)
{
    node *cursor = head;
    int c = 0;
    do
    {
        c++;
        cursor = cursor->next;
    }while(cursor != head);
    return c;
}

/*
    reverse the linked list
*/

void reverseList( node **head) 
{
    node *prev, *cur, *next, *last;  
    if (*head == NULL)
    {
        printf("Cannot reverse empty list.\n");
        return;
    }
    last = *head;
    prev  = *head;
    cur   = (*head)->next;
    *head = (*head)->next;

    
    while (*head != last)
    {
        *head = (*head)->next;
        cur->next = prev;

        prev = cur;
        cur  = *head;
    }

    cur->next = prev;
    *head = prev;      
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
node * Create_cirular(node* head){
    node *prev,*new;
    u16 i=0;
    u32 data,n;
    printf("Enter The # of Nodes: ");
    scanf("%d",&n);
    printf("Enter The value of the 1st Node: ");
    scanf("%d",&data);
    head= create(data,head);
    prev=head;
    for (i = 2; i <= n; i++)
    {
        printf("Enter The value of Node # %d: ",i);
        scanf("%d",&data);
        new=create(data,NULL);
        prev->next=new;
        prev=new;
    }
    prev->next=head;
    return head;
}
node* print_circle(node *head) {

   node *ptr ;
   ptr=head;
    u16 i=1;
   printf("\n[ ");
	
 
   if(head != NULL) {
	
     do
     {
         printf("The value of Node # %d is: %d \n",i,ptr->data);
        ptr=ptr->next;
        i++;
     } while (ptr!=head);
     
      }
   
	
   printf(" ]");
}


int main()
{
    node* head=NULL;
    head=Create_cirular(head);
    //reverse(&head);
   
    //InsertAtEnd(head,5);
    print_circle(head);
    printf("\n the lengthis %d",count(head));
    InsertAtEnd(head,55);
    InsertAtStart(head,99);
    
    print_circle(head);
    reverseList(&head);
   
    print_circle(head);
    return 0;
    }
