#include<stdio.h>
int main()
{
    int i=10;
    rec_print(i);
}
void rec_print(int i)
{
    if(i >=0)
    {
        rec_print(i-1);
    }
    else{
        return;
    }
    printf("%d",i);
}
