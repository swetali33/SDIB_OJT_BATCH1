#include <stdio.h>
#include<stdlib.h>
#include"main.h"

struct node
    {
        int data;
        struct node *next;
    };

struct node * create(int);
void insertion(struct node *);
void deletion();
int main()
{
    

    struct node *newmem,*head,*tmp;

    int n;
    int choice;
    


    top1:
    printf("\nEnter your choice :- ");
    printf("\n1.Create a new List\n2.Insertion\n3.Deletion\nPress 0  to Exit\n");
    scanf("%d",&choice);

    if(choice == 1)
    {
        printf("\nEnter the no of nodes :- ");
        scanf("%d",&n);
        head = create(n);
        printf("Linked list created succesful!!!");
        goto top1;
    }
    else if(choice == 2)
    {
        printf("Welcome to Node Insertion!!!!\n");
        insertion(head);
    }

    else if(choice == 3)
    {
        printf("Welcome to Node Deletion !!!!\n");
        deletion(head);
    }
    else if(choice == 0)
    {
        printf("\nThankyou!!!!\n");
        exit(1);
    }
}