#include<stdio.h>
int main()
{
    float *p;
    float f=10.43;
    p=&f;
    printf("%.2f",*p);
}