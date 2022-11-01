#include<stdio.h>
#include<string.h>

int main()
{
    int x;
    char address[60]="SKILL DEVELOPMENT INSTITUTE\0";
    
    x=strlen(address);
    printf("Length of string is: %d",x);
    
}