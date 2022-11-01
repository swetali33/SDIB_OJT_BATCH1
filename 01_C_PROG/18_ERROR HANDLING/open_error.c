#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<errno.h>

int main()
{
    int f;
    f=open("Hello.txt",O_RDONLY);
     if(f==-1)
    {
       // printf("\nValue of errno iss :%d",errno);
         //printf("\nThe str message of error no is :%s",strerror(errno));
       perror("\nMessage from perror");
    }
}