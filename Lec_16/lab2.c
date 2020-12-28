#include <stdio.h> 
#include <stdlib.h> 
#include "../standard_types.h"

typedef struct Node 
{ 
s32 data; 
struct Node *next; 
}Node; 
void createNodeList(u16 n)
{
    Node *fnNode, *tmp;
    u16 num, i;
    Node *stnode = (struct Node *)malloc(sizeof( Node));

    if(stnode == NULL) 
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
// reads data for the node through keyboard

        printf(" Input data for node 1 : ");
        scanf("%d", &n);
        stnode->num = n;      
        stnode->nextptr = NULL; // links the address field to NULL
        tmp = stnode;
// Creating n nodes and adding to linked list
        for(i=2; i<=n; i++)
        {
            fnNode = (struct Node *)malloc(sizeof(struct Node));
            if(fnNode == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);
 
                fnNode->data = num;      // links the num field of fnNode with num
                fnNode->nextptr = NULL; // links the address field of fnNode with NULL
 
                tmp->nextptr = fnNode; // links previous node i.e. tmp to the fnNode
                tmp = tmp->next; 
            }
        }
    }
}
void displayList()
{
    struct node *tmp;
    if(stnode == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = stnode;
        while(tmp != NULL)
        {
            printf(" Data = %d\n", tmp->data);       // prints the data of current node
            tmp = tmp->next;                     // advances the position of current node
        }
    }
} 
int NodeCount()
{
    int ctr = 0;
    struct node *tmp;
    tmp = Node;
    while(tmp != NULL)
    {
        ctr++;
        tmp = tmp->nextptr;
    }
    return ctr;
}