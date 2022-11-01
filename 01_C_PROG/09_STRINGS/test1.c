#include<stdio.h>

struct st
{
    char name[40];
    int roll;
    float marks;
};

void main()
{
    struct st s1={"sweta",3,85.5};
    printf("%s %d %f",s1.name,s1.roll,s1.marks);
}