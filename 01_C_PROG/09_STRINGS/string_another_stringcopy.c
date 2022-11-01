#include<stdio.h>
#include<string.h>

int main()
{
    char address[60]="SKILL DEVELOPMENT INSTITUTE\0";
    char copy[60];
    strcpy(copy,address);
    printf("cpoy of string is:");
    puts(copy);

}