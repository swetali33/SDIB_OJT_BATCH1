#include<stdio.h>
void inc(int *);
int main()
{
    static int a=10;
    int *p;
    p=&a;
    inc(p);
    printf("%d",*p);
}
void inc(int *c)
{
    ++(*c);
}
  