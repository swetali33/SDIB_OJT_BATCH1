#include<stdio.h>
#include<stdlib.h>
typedef struct {
    int roll,age;
    char name[30],gender;
}student;

int main()
{
    char ch;
    student s;
    FILE *fp;
    fp=fopen("student.dat","w");
    printf("\nEnter student Details :");
    while(1)
    {
        printf("\n Enter Student roll num : ");
        scanf("%d",&s.roll);
        printf("\n Enter Student name : ");
        scanf(" %[^\n]",s.name);
        printf("\n Enter Student gender : ");
        scanf(" %c",&s.gender);
        printf("\n Enter Student age : ");
        scanf(" %d",&s.age);
        printf("\n continue.....(y/n): ");
        scanf(" %c",&ch);
        fprintf(fp,"\n%4d\t%-s\t%4d\t%1c",s.roll,s.name,s.age,s.gender);
        if(ch=='n' || ch=='N')
                break;
    }
    fclose(fp);
}


