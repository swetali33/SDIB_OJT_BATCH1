#include<stdio.h>
int swap(int,int);
int main()
{
    int a=2,b=3;
    swap(a,b);
    printf("\n(main)swapped value of a=%d  and  b=%d",a,b);

}
int  swap(int a, int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    sprintf("(func)swapped value of a=%d  and  b=%d",a,b);
   
}