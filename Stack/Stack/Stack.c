#include "Stack.h"

void print_stack(struct node** head)
{
    struct node* HEAD = *head;
    if(HEAD == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        while(HEAD != NULL)
        {
            printf("%d ", HEAD -> val);
            struct node* free_ad = HEAD;
            HEAD = HEAD -> next;
            free(free_ad);
        }
        *head = NULL;
    }
}

void push(struct node** head, int v)
{
    struct node* new_node = malloc(sizeof(struct node));
    new_node -> val = v;
    new_node -> next = *head;
    *head = new_node;
}

int top(struct node* head)
{
    if(head == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        return head -> val;
    }
}

void pop(struct node** head)
{
    struct node* HEAD = *head;
    if(HEAD == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        *head = HEAD -> next;
        free(HEAD);
    }
}

int empty(struct node* head)
{
    if(head == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int size(struct node* head){
   int SIZE = 0;
   while(head != NULL){
     SIZE++;
     head = head -> next;
   }
   return SIZE;
}
