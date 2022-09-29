#include<stdio.h>
void  pairwise(float,float,float);
int main()
{
    float a , b , c , g;
    printf("Enter 3 number:");

    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    pairwise(a,b,c);
}
    
void pairwise(float a,float b, float c)
{
    float a1,a2,a3;
    a1=(a+b)/2;
    a2=(b+c)/2;
    a3=(a+c)/2;
    printf("%f\n%f\n%f\n",a1,a2,a3);


   
}
