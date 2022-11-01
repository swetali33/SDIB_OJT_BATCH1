#include<stdio.h>
void *malloc(size_t size);
void main()
{
    int *ptr;
    ptr=(int*)malloc(5*sizeof(int));
    printf("address %p",ptr);

    printf("\nEnter a value:");
    scanf("%d",ptr);
    printf(" \nvalue %d",*ptr);
}