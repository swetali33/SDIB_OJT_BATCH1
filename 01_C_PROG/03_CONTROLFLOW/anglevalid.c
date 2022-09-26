#include<stdio.h>
int main()
{
    int s1,s2,s3,angle;
    printf("Enter angle of triangle:\n");
    scanf("%d %d %d",&s1,&s2,&s3);

    angle=s1+s2+s3;

    if(angle == 180)
    {
        printf("Triangle is valid");
    }
    else{
        printf("Triangle is not valid");
    }

}