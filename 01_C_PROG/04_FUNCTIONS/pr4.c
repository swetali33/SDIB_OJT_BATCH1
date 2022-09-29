#include<stdio.h>
int main()
{
    int fun(int);
    int i=fun(10);
    printf("%d\n",--i);
}
int fun(int i)
{
    return (i++);
}