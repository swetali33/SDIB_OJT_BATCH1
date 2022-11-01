#include<stdio.h>
void *malloc(size_t size);
void *realloc(void *ptr,size_t new_size);
void main()
{
    int *ptr,n,i,*temp;
    printf("Enter the no elements ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("address %p",ptr);

    for(i=0;i<n;i++)
    {
        printf("\nEnter the value");
        scanf("%d",&ptr[i]);
    }

    for(i=0;i<n;i++)
    {
        printf(" \nvalue %d: %d",i+1,ptr[i]);
    }   

    temp=realloc(ptr,(n*sizeof(int))+10);
    temp=ptr;
    n=n+10;

    for(i=n;i<n+10;i++)
    {
        printf("\nEnter the value");
        scanf("%d",&ptr[i]);
    }


    for(i=0;i<n+10;i++)
    {
        printf(" \nvalue %d: %d",i+1,ptr[i]);
    }   


}