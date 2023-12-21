#include <stdio.h>
#include <stdlib.h>

struct node{
int val;
struct node* next;
};

void print_stack(struct node** head);
void push(struct node** head, int v);
int top(struct node* head);
void pop(struct node** head);
int empty(struct node* head);
int size(struct node* head);
