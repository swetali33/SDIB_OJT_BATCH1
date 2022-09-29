#include<stdio.h>
int oddeven(int);
int main()
{
    int n;
    printf("Enter a num:");
    scanf("%d",&n);
    oddeven(n);
}
int oddeven(int n)
{
    if(n%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
}