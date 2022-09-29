#include<stdio.h>
int main()
{
    int n,i,largest;
   
    int arr[]= {1,4,67,8,0,34,90};
    int length=sizeof(arr)/sizeof(int);
    largest=arr[0];
    for(i=0;i<length;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }

    }
    printf("largest number is : %d",largest);


}