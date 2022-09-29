#include<stdio.h>
int greatest(int,int,int);
int main()
{
    int a , b , c , g;
    printf("Enter 3 number:");

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    g=greatest(a,b,c);
    printf("The greatest number is :%d\n",g);
}
int greatest(int a,int b, int c)
{
    return (a>b)?(a>c ? a:c):(b>c ? b:c);
    /*if(a>b && a>c)
    {
        return a;
    }
    
    else if(b>c && b>a)
    {
        return b;
    }

    else
    {
        return c;
    }*/
}