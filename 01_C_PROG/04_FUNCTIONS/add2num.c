#include<stdio.h>
int add(int,int);
int main()
{
    int a=10,b=20,c;
    c=add(a,b);
    printf("The addition of two number is %d",c);
}
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}