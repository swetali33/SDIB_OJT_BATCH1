#include<stdio.h>
//adress can be changed but value constant
int main()
{
    int a=100;
    int b=200;
    const int *p;
    p=&a;
    printf(" before %d",p);
    p++;
    printf(" \nafter%d ",p);
}
