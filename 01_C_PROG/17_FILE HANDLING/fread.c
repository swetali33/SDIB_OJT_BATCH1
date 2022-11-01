#include<stdio.h>

int main()
{
    FILE *f;
    f=fopen("Hello.txt","r");
    char buff="Hello piggu";
    char buff1[20];
    if(f==NULL)
    printf("\nFile not found");
    else
    printf("\nFiles created successfully");
    fwrite(f,buff,20);
    

    fclose(f);
}