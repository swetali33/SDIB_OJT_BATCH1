#include<stdio.h>

int main()
{
    int s1,s2,s3;
    printf("Enter sides of triangle:\n");
    scanf("%d %d %d",&s1,&s2,&s3);

    if(s1==s2 && s2==s3)
    {
        printf("EQUILATERAL");
    }
    else if(s1==s2 || s2==s3 || s3==s1)
    {
        printf("ISOSCELES");
    }
    else
    {
        printf("SCALENE");
    }
    
}