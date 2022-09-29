#include<stdio.h>
int swap(int,int);
int a=2,b=3;
int main()
{
 
    swap(a,b);
    printf("\n(main)swapped value of a=%d  and  b=%d",a,b);

}
int  swap(int a, int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
     printf("(func)swapped value of a=%d  and  b=%d",a,b);
   
}