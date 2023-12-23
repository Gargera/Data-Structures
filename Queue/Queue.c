#include "Queue.h"

void print_queue(struct node** front , struct node** back)
{
    struct node* FRONT = *front;
    if(FRONT == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        while(FRONT != NULL)
        {
            printf("%d ", FRONT -> val);
            struct node* free_ad = FRONT;
            FRONT = FRONT -> next;
            free(free_ad);
        }
        *front = NULL;
        *back = NULL;
    }
}

void push(struct node** back, struct node** front , int v)
{
    struct node* new_node = malloc(sizeof(struct node));
    new_node -> val = v;
    new_node -> next = NULL;

    if(*back == NULL){
       *back = new_node;
       *front = new_node;
    }
    else{
       (*back) -> next = new_node;
       *back = new_node;
    }
}

int head(struct node* front)
{
    if(front == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        return front -> val;
    }
}

void pop(struct node** front , struct node** back)
{
    struct node* FRONT = *front;
    if(FRONT == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        *front = FRONT -> next;
        free(FRONT);
        if(*front == NULL) *back = NULL;
    }
}

int empty(struct node* front)
{
    if(front == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int size(struct node* front){
   int SIZE = 0;
   while(front != NULL){
     SIZE++;
     front = front -> next;
   }
   return SIZE;
}
