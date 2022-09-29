#include<stdio.h>
void disp(int arr[],int);
int main()
{
    int n,i,v=0,pos;
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

    printf("Enter the position of the element");
    scanf("%d",&pos);

    if(pos>n+1)
    {
        printf("Deletion is not possible");

    }
    else
    {
        for(i=pos-1;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }

    }
    printf("the updated array :");

    for(i=0;i<n-1;i++)
        {
            printf("%d ",arr[i]);
        }
}
