#include<stdio.h>
int add(int,int);
void sub();
int mul();
void div(int,int);
int main()
{
    int a=10,b=2,x;
    x=add(a,b);
    printf("The addition of two number is:%d\n",x);
    sub();
    x=mul();
    printf("The multiplication of two number is:%d\n",x);
    div(a,b);
}

int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
void sub()
{
    int a=4,b=2;
    int c=a-b;
    printf("The subtraction of two number is:%d\n",c);
}
int mul()
{
    int a=4,b=2;
    int s=a*b;
    return s;
}
void div(int a,int b)
{
    int y;
    y=a/b;
    printf("The division of two number is:%d\n",y);
}