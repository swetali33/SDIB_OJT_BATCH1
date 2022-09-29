#include<stdio.h>
int square(int);
int main()
{
    int n,res;
    printf("enter a num:");
    scanf("%d",&n);
    res=square(n);
    
    printf("Square of a num %d is: %d ",n,res);



}
int square(int n)
{
    return (n*n);
}