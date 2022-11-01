#include<stdio.h>
void *malloc(size_t size);
void main()
{
    int *ptr;
    ptr=(int*)malloc(5*sizeof(int));
    printf("%p",ptr);
}