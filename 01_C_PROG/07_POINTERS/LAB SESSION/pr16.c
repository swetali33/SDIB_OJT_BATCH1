#include<stdio.h>

int main()
{
    int x =10;
    int *y,**z;
    
    y = &x;
    z =&y;
    printf("%d  %d  %d\n" ,x,*y,**z);
    
    
}