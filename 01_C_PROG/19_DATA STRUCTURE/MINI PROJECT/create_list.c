#include<stdio.h>
#include<stdlib.h>
int main();
struct node
{
    int data;
    struct node *next;
};


struct node * create(int choice)
{
    

    struct node *newmem,*head,*tmp;
    head = NULL;
    while(choice != 0)
    {
        newmem=(struct node *)malloc (sizeof(struct node));
        printf("\nEnter data : ");
        scanf("%d",&newmem->data);
        newmem->next=0;
        if(head == 0)
        {
            head = tmp = newmem;
        }
        else
        {
            tmp -> next = newmem;
            tmp = newmem;
        }
        choice--;

    }

    printf("__________________\n");

    tmp = head;
    printf("\nThe node datas are : ");
    tmp = head;
    while(tmp != NULL)
    {
        printf("%d ",tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
    
    return head;

}