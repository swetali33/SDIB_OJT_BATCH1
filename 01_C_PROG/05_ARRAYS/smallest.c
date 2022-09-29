#include<stdio.h>
int main()
{
    int n,i,smallest;
   
    int arr[]= {1,4,67,8,0,34,90};
    int length=sizeof(arr)/sizeof(int);
    smallest=arr[0];
    for(i=0;i<length;i++)
    {
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }

    }
    printf("smallest number is : %d",smallest);


}