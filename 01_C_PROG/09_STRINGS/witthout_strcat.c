#include<stdio.h>
#include<string.h>
void display(char ch[]);
int main()
{
	char s1[100]="Sit\0";
	char s2[100]="Silicon\0";
	int i,j;
	
	i = strlen(s1);
	for (j = 0; s2[j] != '\0'; i++, j++) {
		s1[i] = s2[j];
	}
	s1[i] = '\0';
	printf("The concated string is %s",s1);
	
}
