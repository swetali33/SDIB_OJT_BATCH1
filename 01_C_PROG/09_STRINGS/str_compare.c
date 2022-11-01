#include<stdio.h>
#include<string.h>

int main()
{
    int x;
    char address[60]="SKILL DEVELOPMENT INSTITUTE\0";
    char address1[60]="SILICON\0";
    x=strcmp(address1,address);
    printf("difference of string is: %d",x);
    
}