#include<stdio.h>
void disp(int arr[],int);
int main()
{
    int n=3,i,v=0,p;
    int c=0;
    printf("Enter the value:");
    scanf("%d",&v);
    printf("Enter the position:");
    scanf("%d",&p);


  
    int arr[10]={1,88,88};

    for(i=n-1;i>=p-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[p-1]=v;
    
    
    for(i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
}

