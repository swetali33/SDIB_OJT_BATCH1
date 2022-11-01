#include<stdio.h>
int main()
{
	char name[100]="$GPRMC,161229.487,A,3723.2475,N,12158.3416,W,0.13,309.62,120598, ,*10";
	int i;
	printf("\nThe longitude is:-");
	for(i=20;i<29;i++)
	{
		printf("%c",name[i]);
	}
	printf("\nThe latitude is:-");
	for(i=32;i<42;i++)
	{
		printf("%c",name[i]);
	}
}