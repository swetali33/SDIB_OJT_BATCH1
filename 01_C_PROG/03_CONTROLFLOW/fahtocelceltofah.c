#include<stdio.h>
int main()
{
    float fah  , cel ;
    printf("Enter temp for fah: ");
    scanf("%f",&fah);
    printf("Enter temp for cel: ");
    scanf("%f",&cel);
    cel=((fah-32)*5)/9;
    printf("Temperaature in celcius is:%f\n",cel);
    fah=((cel*9)/5)+32;
    printf("Temperaature in fahrenheit is:%f\n",fah);
}