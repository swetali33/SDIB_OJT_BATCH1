#include<stdio.h>
#include<stdlib.h>
void create(void);
void print(void);

struct node
{
    int data;
    struct node *next;
};
struct node *nemem,*head;

int main()
{
    createnode();
    print();
}

void createnode()
{
    nemem=(struct node *)malloc (sizeof(struct node));
    printf("\nEnter value of data :");
    scanf("%d",&nemem->data);
    nemem->next=NULL;
    head=nemem;
}
void print()
{
    printf("\nnew node data is  :%d",head->data);
}
