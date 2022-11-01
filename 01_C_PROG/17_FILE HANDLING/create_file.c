#include<stdio.h>

int main()
{
    FILE *f;
    f=fopen("Hello.txt","r");
    if(f==NULL)
    printf("\nFile not found");
    
    else
    printf("\nFiles created successfully");

    fclose(f);
}