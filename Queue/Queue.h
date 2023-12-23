#include <stdio.h>
#include <stdlib.h>

struct node{
int val;
struct node* next;
};

void print_queue(struct node** front , struct node** back);
void push(struct node** back, struct node** front , int v);
int head(struct node* front);
void pop(struct node** front , struct node** back);
int empty(struct node* front);
int size(struct node* front);
