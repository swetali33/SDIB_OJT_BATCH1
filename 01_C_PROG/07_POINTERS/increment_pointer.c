#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *p;
    p=arr;
    printf("\naddress %d",p);
    printf("\nvalue %d",*p);
    printf("\naddress %d",(++p));
    printf("\nvalue %d ", *p);
    
}
