#include<stdio.h>
void disp(int arr[],int);
int main()
{
    int n,i,v=0,r,j;
    int c=0;
    printf("Enter the number:");
    scanf("%d",&n);

  
    int arr[3]={1,88,88};


   // for(i=0;i<3;i++)
    
        
    for(j=0;j<3;j++)
    {
        if(arr[j]==n)
        c++;
    }
    
    printf("the number repeatation is: %d",c);
}
    
   