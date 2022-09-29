#include<stdio.h>
int main()
{
    int n,i,j,v=0;
    printf("Enter the array size:");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    
    for(i=0;i<n;i++)
    {
        printf("Enter the element :");
        scanf("%d",&v);
        arr1[i]=v;
    }
    
        for(j=0;j<n;j++)
        {
            arr2[j]=arr1[j];
        }

    
    for(i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");
    for(i=0; i<n ;i++)
    {
        printf("%d ",arr2[i]);
    }
}