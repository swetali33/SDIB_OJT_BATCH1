#include<stdio.h>
void disp(int arr[],int);
int main()
{
    int n,i,v=0;
    printf("Enter the array size:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element :");
        //v=0;
        scanf("%d",&v);
        arr[i]=v;
    }
    disp(arr,n);
}
void disp(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

