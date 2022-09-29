#include<stdio.h>
int recursive(int i)
{
    static int c=0;
    c=c+i;
    return c;
}

int main()
{
    int i,j;
    for(i=0;i<=5;i++)
    j=recursive(i);
    printf("%d",j);
    return 0;
    
}
