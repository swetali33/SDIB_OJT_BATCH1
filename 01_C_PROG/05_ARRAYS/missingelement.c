#include<stdio.h>
//void disp(int arr[],int);
int main()
{
    int n=10,i,missing;
    int arr[10]={1,2,4,5,6};
    for(i=0;i<10;i++)
    {
        if(arr[i]+1== arr[i+1])
        {
            continue;
        }
        else
        {
            missing=arr[i]+1;
            break;

        }
        
    }
    printf("%d",missing);
}