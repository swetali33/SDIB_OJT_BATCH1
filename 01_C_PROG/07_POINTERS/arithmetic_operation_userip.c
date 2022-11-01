#include<stdio.h>

int (*fnptr)(int,int);


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
    char ch;
    int X,Y;
    printf("Enter the operation you want to perform:");
    scanf("%c",&ch);

    switch(ch)
    {
        case '+':
            fnptr=add;
            break;

        case '-':
            fnptr=sub;
            break;

        case '*':
            fnptr=mul;
            break;

        case '/':
            fnptr=div;
            break;
    }

    X = (*fnptr)(20,20);
    printf("%d", X);
}

    

    
    
    
  


   





