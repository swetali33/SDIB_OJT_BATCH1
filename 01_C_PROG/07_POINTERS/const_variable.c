#include<stdio.h>
//adress can be changed but value constant
int main()
{
    
    const int a=1;
    int *p;
    p=&a;
    (*p)++;
    printf(" value %d",a);
    
}
