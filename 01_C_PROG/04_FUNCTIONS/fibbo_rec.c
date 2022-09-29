#include<stdio.h>

int fib(int);
int main()
{
    int n,i;
    printf("Enter the term:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("%d",fib(i));
    }
}
int fib(int i)
{
    if(i==0)
    {
        return 0;
    }
    else if(i==1)
    {
        return 1;

    }
    
    return fib(i-1)+fib(i-2);
    
   
}
