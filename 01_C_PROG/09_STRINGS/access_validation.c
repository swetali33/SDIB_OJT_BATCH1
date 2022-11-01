#include<stdio.h>
#include<string.h>
void access(char s[]);
int main()

{
  
    char usr[20];
    printf("Enter the pwd : ");
    gets(usr);
    if(usr!='\0')
    {
        access(usr);
    }
    else{
        printf("enter a valid pwd !!!!!!");
    }
}

void access(char s[])
{
    char pwd[20]="SWETA\0";
    int i;
    for(i=0;i<=strlen(pwd);i++)
    {
        while(pwd[i] == s[i])
        {
            
        }
    }}