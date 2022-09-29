#include<stdio.h>
int main()
{
    int no=5;
    reverse(no);
    return 0;
}
int reverse(int no)
{
    if(no==0)
    return 0;
    else{
        printf("%d",no);
    }
    reverse (no--);
}