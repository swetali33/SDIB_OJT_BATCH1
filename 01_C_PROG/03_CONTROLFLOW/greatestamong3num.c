#include<stdio.h>
int main()
{
    int a=9 , b=8 , c=10;
    printf("Enter 3 number:");

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    

    if(a>b && a>c)
    {
        printf("The greatest number is :%d\n",a);
    }
    
    else if(b>c && b>a)
    {
        printf("The greatest number is :%d\n",b);
    }

    else
    {
        printf("The greatest number is :%d\n",c);
    }
}