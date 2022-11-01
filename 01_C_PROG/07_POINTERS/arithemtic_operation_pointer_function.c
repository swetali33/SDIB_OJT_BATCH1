#include<stdio.h>

int (*fnptr)(int,int);

/*int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);*/

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
    int X,Y;

    
    fnptr=add;
    X= (*fnptr)(10,20);
    printf("\nadd : %d",X);

    
    fnptr=sub;
    Y= (*fnptr)(20,10);
    printf("\nsub : %d",Y);


    fnptr=mul;
    X=(*fnptr)(20,10);
    printf("\nmul : %d",X);

    fnptr=div;
    Y= (*fnptr)(20,10);
    printf("\ndiv : %d",Y);
}
/*int add(int x,int y)
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
}*/


