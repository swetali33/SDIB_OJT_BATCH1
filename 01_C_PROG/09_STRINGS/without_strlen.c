#include<stdio.h>
int main()
{
	char name[100]="Silicon\0";
	int i=0,count=0;
	while(name[i]!='\0')
	{
		count++;
		i++;
	}
	printf("The length of the string is %d",count);
	
}