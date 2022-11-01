#include<stdio.h>

int main()
{
    int s=2;
    int *p=NULL;
    p=&s;
    printf("\nbefore inc  %d",p);
    printf("\n address %d",++p);
    printf("\n value %d",*p++);

}