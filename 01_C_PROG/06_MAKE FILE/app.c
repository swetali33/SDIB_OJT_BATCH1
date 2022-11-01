#include<stdio.h>
#include "arith.h"
extern int res;
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