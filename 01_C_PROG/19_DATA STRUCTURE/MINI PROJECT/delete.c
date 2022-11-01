#include<stdio.h>
#include<stdlib.h>
int main();
struct node
    {
        int data;
        struct node *next;
    };

    struct node *newmem,*head,*tmp,*prev;

void deletion(struct node *head)
{   
    
    int choice;
    top:
    printf("\n1.Delete at Beginning\n2.Delete at Position\n3.Delete at End\nPress 0 key to Exit");
    printf("\nEnter your choice :- ");
    scanf("%d",&choice);
    if(choice == 1)
    {
        tmp = head;
        head=head->next;
        free(tmp);
        printf("_________________________________\n");
        printf("\nNode Succesfully Deleted at Beginning\nThe node datas are : ");
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
        tmp =prev= head;
        while(i<pos)
        {
            prev = tmp;
            tmp = tmp->next;
            i++;
        }
        prev->next = tmp->next;
        free(tmp);
        printf("_________________________________\n");
        printf("\nNode Succesfully Deleted at position %d\nThe node datas are : ",pos);
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
        tmp =prev= head;
        while(tmp->next != NULL)
        {
            prev=tmp;
            tmp=tmp->next;
        }
        prev->next = NULL;
        free(tmp);
        printf("_________________________________\n");
        printf("\nNode Succesfully Deleted at End\nThe node datas are : ");
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