#include <stdio.h>
#include <stdlib.h>

struct node
{
    int val;
    struct node* next;
};

void print_list(struct node* head);
void push_head(struct node** head, int v);
void push_end(struct node** head, int v);
int head(struct node* head);
int end(struct node* head);
void pop_head(struct node** head);
void pop_end(struct node** head);

