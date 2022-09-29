#include<stdio.h>
void  dec(int);

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    

    
}
void dec(int n)
{

    int i,x;
    for(i=3;i>=0;i--)
    {
        x=(n>>i) & 0x1;
        printf("%d",x);
    }
}
