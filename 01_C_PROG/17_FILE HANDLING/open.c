#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>

int main()
{
    int f;
    f=open("Hello.txt",O_WRONLY|O_EXCL|O_CREAT);
    //char buff="Hello piggu";
    char buff1[20];
    printf("%d",f);
    if(f==-1)
    printf("\nFile not found");
    
    else
    printf("\nFiles created successfully");

    getchar();

    close(f);
}