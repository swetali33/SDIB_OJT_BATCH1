#include<stdio.h>
#include<errno.h>


int main()
{
    FILE *fp;
    fp = fopen("pig.txt","r");
    if(fp==NULL)
    {
        printf("\nValue of errno iss :%d",errno);
        printf("\nThe str message of error no is :%s",strerror(errno));
       // perror("\nMessage from perror");
    }
}