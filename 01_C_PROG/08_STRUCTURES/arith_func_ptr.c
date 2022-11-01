#include<stdio.h>
struct arith
{
    int a,b,res;
    int (*fnptr)(int,int);

}va;





int add(int x,int y)
{
    return (x+y);
}

int sub(int x,int y)
{
    return (x-y);
}
int mul(int x,int y)
{
    return (x*y);
}

int div(int x,int y)
{
    return (x/y);
}

int main()
{
    printf("enter the vlue of a:");
    scanf("%d",&va.a);

    printf("enter the vlue of b:");
    scanf("%d",&va.b);
    
    va.fnptr=add;
    va.res= (*(va.fnptr))(va.a,va.b);
    printf("\nadd : %d",va.res);

    
    va.fnptr=sub;
    va.res= (*(va.fnptr))(va.a,va.b);
    printf("\nsub : %d",va.res);


    va.fnptr=mul;
    va.res=(*(va.fnptr))(va.a,va.b);
    printf("\nmul : %d",va.res);

    va.fnptr=div;
    va.res= (*(va.fnptr))(va.a,va.b);
    printf("\ndiv : %d",va.res);
}



