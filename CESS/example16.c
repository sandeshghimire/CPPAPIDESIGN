#include <stdio.h>

typedef struct node 
{
    int item;
    struct node * next;
    struct node * prev;
}noteType; 


int initList(struct node * head);
int queue( struct node ** head, int data);
int dequeue(struct node ** head);
int printList(struct node ** head);

int push(struct node ** head, int data);
int pop(struct node ** head);


int length(struct node ** head);


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
    dequeue(&head);
    dequeue(&head);
    dequeue(&head);
    printList(&head);   


    push(&head, 4);
    push(&head, 5);
    push(&head, 6);
    push(&head, 7);
    push(&head, 8);

    printList(&head);

    pop(&head);
    pop(&head);
    pop(&head);   

    printList(&head);


    printf("the length of list is %d \n", length(&head));


     
}


int initList(struct node * head)
{
}


int queue( struct node * * head, int data)
{
    struct node * cur = malloc(sizeof(noteType));
    struct node * tmp = *head;
    
    if( *head == NULL)
    {
        *head = cur;
        cur->item = data;
        cur->prev = NULL;
        cur->next= NULL;
        return 0;
    }
    else
    {
        while(tmp->next != NULL){
            tmp = tmp->next;
        }

        cur->item = data;
        tmp->next = cur;
        cur->prev = tmp;
        cur->next = NULL;
    }
}

int dequeue(struct node ** head)
{
    struct node * cur = *head;
    if ( cur == NULL)
    {
        printf("List is emapty  \n");
    }
    else if ( cur->next == NULL)
    {
        free(cur);
        *head = NULL;
    }
    else
    {
        *head = cur->next;
        cur->prev = NULL;
        free(cur);

    }
}


int push(struct node ** head, int data)
{
    struct node * cur = malloc(sizeof(noteType));
    cur->item = data;

    if(*head == NULL)
    {
        *head = cur;
        cur->next = NULL;
        cur->prev = NULL;
    }
    else
    {
        cur->prev = NULL;
        cur->next = *head;
        *head = cur;
    }



}
int pop(struct node ** head)
{
    struct node * cur = *head;

    if(cur == NULL)
    {
        printf("list is empty \n");
    }
    else if ( cur->next == NULL)
    {
        free(cur);
        *head = NULL;
    }
    else
    {
        *head = cur->next;
        cur->next->prev = NULL;
        free(cur);
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
printf("\n\n\n");
return 0;
}

int length(struct node ** head)
{
    int counter = 0;
    struct node * cur = *head;

    if( cur == NULL)
    {
        return 0;
    }

    while(cur != NULL)
    {
        counter++;
        cur = cur->next;
    }
    return counter;
}