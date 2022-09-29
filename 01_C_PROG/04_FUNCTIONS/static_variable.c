#include<stdio.h>
int sweta();
int main()
{
    //int c=1;
    sweta();
    //c++;
   // printf("%d",c);
    sweta();
    sweta();
}
int sweta()
    {
        static int c=0;
        c++;
        printf("%d",c);
    }
