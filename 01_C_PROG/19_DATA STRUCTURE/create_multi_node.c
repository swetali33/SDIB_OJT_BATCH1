#include<stdio.h>
#include<stdlib.h>
void create(void);
void print(void);

struct node
{
    int data;
    struct node *next;
};
struct node *nemem,*head,*temp;

int main()
{
    createnode();
    head=nemem;
    print();
    createnode();
    print();
}

void createnode()
{
    nemem=(struct node *)malloc (sizeof(struct node));
    nemem->next=NULL;
    temp=nemem;
    printf("\nEnter value of data :");
    scanf("%d",&temp->data);
}

void print()
{
    printf("\nnew node data is  :%d",temp->data);
}
