#include<stdio.h>
int main()
{
    int n,i,v=0,temp=0;
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
    //sorting
    for(i=0;i<n;i++)
    {
        if(arr[i] > arr[i+1])
        {
            temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
    }
     for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}