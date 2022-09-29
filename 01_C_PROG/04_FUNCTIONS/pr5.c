#include<stdio.h>
int main()
{
    int i=1;
    if(!i)
    {
        printf("phytec");
    }
    else
    {
        i=0;
        printf("cprgrm");
        main();
    }
    return 0;
}