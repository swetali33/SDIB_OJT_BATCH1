#include<stdio.h>
int (*fnptr[4])(int,int);

int add(int a, int b)
{
    return(a+b);
}

int sub(int a, int b)
{
    return(a-b);
}

int mul(int a, int b)
{
    return(a*b);
}

int div(int a, int b)
{
    return(a/b);
}


void main()
{
    int a;
    fnptr[0]=add;
    fnptr[1]=sub;
    fnptr[2]=mul;
    fnptr[3]=div;
    char ch;
    printf("Enter the operation to be performed(symbol):- ");
    scanf("%c",&ch);

    switch(ch)
    {
        case '+':
                a=((*fnptr[0])(10,20));
                printf("%d",a);
                break;

        case '-':
                a=((*fnptr[1])(10,20));
                printf("%d",a);
                break;

        case '*':
                a=((*fnptr[2])(10,20));
                printf("%d",a);
                break;

        case '/':
                a=((*fnptr[3])(10,20));
                printf("%d",a);
                break;
    }


}