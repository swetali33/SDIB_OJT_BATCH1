#include<stdio.h>
#include<stdlib.h>
int main();
struct node
    {
        int data;
        struct node *next;
    };

    struct node *newmem,*head,*tmp,*prev;

void insertion(struct node *head)
{   
    
    int choice;
    top:
    printf("\n1.Insert at Beginning\n2.Insert at Position\n3.Insert at End\nPress 0 key to Exit");
    printf("\nEnter your choice :- ");
    scanf("%d",&choice);
    if(choice == 1)
    {
        newmem=(struct node *)malloc (sizeof(struct node));
        printf("\nEnter data : ");
        scanf("%d",&newmem->data);
        tmp = head;
        head = newmem;
        newmem->next = tmp;
        printf("_________________________________\n");
        printf("\nNew node Succesfully inserted at Beginning\nThe node datas are : ");
        tmp = head;
        while(tmp != NULL)
        {
            printf("%d ",tmp->data);
            tmp = tmp->next;
        }
        printf("\n");
        goto top;

    }

    else if(choice == 2)
    {
        
        int pos,i=1;
        printf("\nEnter the position : ");
        scanf("%d",&pos);
        newmem=(struct node *)malloc (sizeof(struct node));
        printf("\nEnter data : ");
        scanf("%d",&newmem->data);
        tmp = head;
        if(i<pos)
        {
            prev = tmp;
            tmp = tmp->next;
            i++;
        }
        prev->next = newmem;
        newmem->next=tmp;
        printf("_________________________________\n");
        printf("\nNew node Succesfully inserted at position %d\nThe node datas are : ",pos);
        tmp = head;
        while(tmp != NULL)
        {
            printf("%d ",tmp->data);
            tmp = tmp->next;
        }
        printf("\n");
        goto top;
    
    }
    else if(choice == 3)
    {
        newmem=(struct node *)malloc (sizeof(struct node));
        printf("\nEnter data : ");
        scanf("%d",&newmem->data);
        tmp = head;
        while(tmp->next != NULL)
        {
            tmp=tmp->next;
        }
        tmp->next = newmem;
        newmem->next = NULL;
        printf("_________________________________\n");
        printf("\nNew node Succesfully inserted at End\nThe node datas are : ");
        tmp = head;
        while(tmp != NULL)
        {
            printf("%d ",tmp->data);
            tmp = tmp->next;
        }
        printf("\n");
        goto top;
    }
    else if(choice == 0)
    {
        printf("_________________________________\n");
        main();
    }

}