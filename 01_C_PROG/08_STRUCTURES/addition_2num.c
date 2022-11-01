#include<stdio.h>

struct add
{
    int a;
    int b;
    int res;
   
}val;
int add(int ,int );

int main()
{
    printf("enter the vlue of a:");
    scanf("%d",&val.a);

    printf("enter the vlue of b:");
    scanf("%d",&val.b);

    val.res=add(val.a,val.b);

    printf("%d",val.res);

}

int add(int a, int b)
{
    return(a+b);
}