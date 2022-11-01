#include<stdio.h>
int main()
{
    int *p;
    int a=10;
    p=&a;

    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    printf("\n%d",p+5);
    printf("\n%d",p+2);
    printf("\n%d",((p+5)-(p+2)));
}

    