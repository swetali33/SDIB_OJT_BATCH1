#include<stdio.h>
void armstrong(int);
void perfect(int);
int main()
{
    int n;
    printf("Enter a num:");
    scanf("%d",&n);
    armstrong(n);
    perfect(n);

}
void armstrong(int n)
{
    int sum=0,dig,temp=n;
    while(n!=0)
    {
        dig=n%10;
        sum+=(dig*dig*dig);
        n=n/10;

    }
    if(sum==temp)
    {
        printf("\nARMSTRONG");
    }
    else{
        printf("\nNOT A ARMSTRONG");
    }

}
void perfect(int n)
{
    int i=1,sum=0;
    while(i<n)
    {
        if(n%i==0)
        {
            sum+=i;
        }
        i++;
    }
    
    if(sum==n)
    {
        printf("\nPERFECT NUMBER");
    }
    else
    {
        printf("\nNOT A PERFECT NUMBER");
    }
}
