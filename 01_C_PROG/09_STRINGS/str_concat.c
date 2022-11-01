#include<stdio.h>
#include<string.h>

int main()
{
    char address[60]="SKILL DEVELOPMENT INSTITUTE\0";
    char address1[60]="SILICON\0";
    printf("concatenate string is: %s",strcat(address1,address));
    
}