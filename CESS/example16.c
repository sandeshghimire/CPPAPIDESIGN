#include <stdio.h>

typedef struct node 
{
    int item;
    struct node * next;
    struct node * prev;
}noteType; 


int initList(struct node * head);
int queue( struct node ** head, int data);
int printList(struct node ** head);


int main(int argc, char** argv)
{
    struct node * head = NULL;
    initList(head);
    queue(&head, 10);
    queue(&head, 20);
    queue(&head, 30);
    queue(&head, 40);
    queue(&head, 50);
    queue(&head, 60);
    queue(&head, 70);
    queue(&head, 80);
    printList(&head);   
     
}


int initList(struct node * head)
{
}


int queue( struct node * * head, int data)
{
    struct node * cur = malloc(sizeof(noteType));
    if( *head == NULL)
    {
        *head = cur;
        cur->item = data;
        cur->prev = NULL;
        cur->next= NULL;
    }

}

int printList(struct node ** head)
{
    struct node * cur = *head;
    while(cur != NULL)
    {
        printf("item is %d\n", cur->item);
        cur = cur->next;
    }
}