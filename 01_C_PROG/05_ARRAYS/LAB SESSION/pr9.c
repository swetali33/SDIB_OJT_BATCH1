#include<stdio.h>
int main()
{
    int arr[]={12.4,3.2,1.4,1.5};
    printf("%d\n",sizeof(arr)/sizeof(arr[0]));
    return 0;
    
}