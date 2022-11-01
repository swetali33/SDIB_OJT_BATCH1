#include<stdio.h>
int main()
{
    int *p;
    int a=10;
    p=&a;

    printf("address of a is %p \n",&a);
    printf("values of p is %d \n",p);
    
    printf("values of a is %d \n",a);
    printf("address of p is %p \n",&p);
}

    
