#include<stdio.h>
void *calloc(size_t n,size_t size);
void main()
{
    int *ptr,n,i;
    printf("Enter the no elements ");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
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
}