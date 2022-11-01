#include<stdio.h>

struct add
{
    int a;
    int b;
    int res;
   
}val;

void add(int ,int ,int *);

int main()
{
    printf("enter the vlue of a:");
    scanf("%d",&val.a);

    printf("enter the vlue of b:");
    scanf("%d",&val.b);

    add(val.a,val.b,&val.res);

    printf("%d",val.res);

}

void add(int a, int b,int *r)
{
    *r = a+b;
}