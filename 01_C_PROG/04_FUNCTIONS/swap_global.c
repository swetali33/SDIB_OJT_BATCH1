#include<stdio.h>
int a=2,b=8;
int main()
{
   
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d",a,b);

}