#include<stdio.h>
int main()
{
    int n,i,v;
    printf("Enter the array size:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the %d element :",(i+1));
        v=0;
        scanf("%d",&v);
        arr[i]=v;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
