#include<stdio.h>
void perfect(int);
int main()
{
    int n;
    printf("Enter a num:");
    scanf("%d",&n);
    perfect(n);

}
void perfect(int n)
{
    int i,j,sum;
    for(j=1;j<=n;j++)
    {
        i=1;
        sum=0;
        while(i<j)
      {
        if(j%i==0)
        {
            sum+=i;
        }
        i++;
      }
        if(sum==j)
        {
            printf("%d\n",j);
        }
    }
}