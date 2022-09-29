#include<stdio.h>
int a=2,b=3;
void swap();
int main()
{
    printf("\n(main)Before swap value of a=%d  and  b=%d",a,b);
    swap();
    printf("\n(main)After swap value of a=%d  and  b=%d",a,b);

}
void  swap()
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n(func)swapped value of a=%d  and  b=%d",a,b);
   
}