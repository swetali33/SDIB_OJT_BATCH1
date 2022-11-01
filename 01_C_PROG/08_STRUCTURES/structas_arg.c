#include<stdio.h>

struct arith
{
    int a;
    int b;
    int res;
   
}val;

void add(struct arith value)
{
    value.res=value.a+value.b;
     printf("%d",value.res);

    
}


int main()
{
    printf("enter the vlue of a:");
    scanf("%d",&val.a);

    printf("enter the vlue of b:");
    scanf("%d",&val.b);

    add(val);
}

