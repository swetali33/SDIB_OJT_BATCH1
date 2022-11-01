#include<stdio.h>

int main()
{
    char address[]="SKILL DEVELOPMENT INSTITUTE\nTARBOI\0";
    char new[40]={'S','D','I','\n','T','\0'};
    printf(address);
    printf("\n%s",new);

}