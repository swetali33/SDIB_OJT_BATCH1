#include<stdio.h>

int incr(int i)
{
    static int c=0;
    c=c+i;
    return c;
}

int main()
{
    int i,j;
    for(i=0;i<=4;i++)
    j=incr(i);
    printf("%d",j);
    return 0;
    
}
