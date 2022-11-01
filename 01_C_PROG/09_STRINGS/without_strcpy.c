#include<stdio.h>
int main()
{
    int x;
    char address[60]="SKILL\0";
    char address1[60];
    int i;
    for(i=0;address[i]!='\0';i++)
    {
        address1[i]=address[i];
    }
    address1[i]='\0';
    printf("%s",address1);
    
    
}