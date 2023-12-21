#include "Linked-List-Functions.h"

void print_list(struct node* head)
{
    if(head == NULL)
    {
        printf("Linked List is empty\n");
    }
    else
    {
        while(head != NULL)
        {
            printf("%d ", head -> val);
            head = head -> next;
        }
    }
}

void push_head(struct node** head, int v)
{
    struct node* new_node = malloc(sizeof(struct node));
    new_node -> val = v;
    new_node -> next = *head;
    *head = new_node;
}

void push_end(struct node** head, int v)
{
    struct node* new_node = malloc(sizeof(struct node));
    new_node -> val = v;
    new_node -> next = NULL;

    if(*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        struct node* HEAD = *head;
        while(HEAD -> next != NULL)
        {
            HEAD = HEAD -> next;
        }
        HEAD -> next = new_node;
    }
}

int head(struct node* head)
{
    if(head == NULL)
    {
        printf("Linked List is empty\n");
    }
    else
    {
        return head -> val;
    }
}

int end(struct node* head)
{
    if(head == NULL)
    {
        printf("Linked List is empty\n");
    }
    else
    {
        while(head -> next != NULL)
        {
            head = head -> next;
        }
        return head -> val;
    }
}

void pop_head(struct node** head)
{
    struct node* HEAD = *head;
    if(HEAD == NULL)
    {
        printf("Linked List is empty\n");
    }
    else
    {
        *head = HEAD -> next;
        free(HEAD);
    }
}

void pop_end(struct node** head)
{
    struct node* HEAD = *head;
    if(HEAD == NULL)
    {
        printf("Linked List is empty\n");
    }
    else if(HEAD -> next == NULL)
    {
        free(HEAD);
        *head = NULL;
    }
    else
    {
        while(HEAD -> next -> next != NULL)
        {
            HEAD = HEAD -> next;
        }
        free(HEAD -> next);
        HEAD -> next = NULL;
    }
}
