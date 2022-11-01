#include<stdio.h>
int main()
{
    int n,i,v=0,sum=0;
    float avg=0;
    printf("Enter the array size:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element:");
        //v=0;
        scanf("%d",&v);
        arr[i]=v;
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        printf("%d ",i[arr]);
    }
    printf("\navg of the elements are %f ",avg);
    

    
    
}