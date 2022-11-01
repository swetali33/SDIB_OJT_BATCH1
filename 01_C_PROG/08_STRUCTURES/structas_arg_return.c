#include<stdio.h>

struct arith
{
    int a;
    int b;
    int res;
   
}val;

struct arith add(struct arith value)
{
    value.res=value.a+value.b;
     //printf("%d",value.res);
     return value;
     

    
}


int main()
{
    printf("enter the vlue of a:");
    scanf("%d",&val.a);

    printf("enter the vlue of b:");
    scanf("%d",&val.b);

    val= add(val);
    printf("%d",val.res);
}

