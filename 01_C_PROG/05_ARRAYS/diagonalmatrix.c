#include<stdio.h>
void disp(int arr[],int);
int main()
{
    int n,i,v=0,r,c,j;
    printf("Enter the row:");
    scanf("%d",&r);
    printf("Enter the coloumn:");
    scanf("%d",&c);
    int add[r][c];
    int arr[3][3]={1,1,1,1,1,1,1,1,1};


    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           add[i][j]=arr[i][j]+arr[i][j];
        }
    }
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            printf("%d ",add[i][j]);

        }
        printf("\n");
    }
}