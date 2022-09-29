#include<stdio.h>
extern int res;
int add(int,int);
int sub(int,int);
void disp();
int main()
{
    printf("%d\n",res);
    add(10,20);
    printf("%d\n",res);
    disp();
    sub(40,20);
    printf("%d\n",res);
    disp();
}