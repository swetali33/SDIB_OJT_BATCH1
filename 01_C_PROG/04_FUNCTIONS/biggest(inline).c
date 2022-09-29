#include<stdio.h>

inline int biggest(int,int);
int main()
{ 
    int a,b,x;
    printf("Enter the number:\n");
    scanf("%d %d",&a,&b);

    x=biggest(a,b);
    printf("%d",x);
}
inline int biggest(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}
