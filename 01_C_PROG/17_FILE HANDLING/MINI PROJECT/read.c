#include<stdio.h>
void read(void);
typedef struct {
    int roll,age;
    char name[30],gender;
}student;

void read()
{
    
    char ch;
    student s;
    FILE *fp;
    fp=fopen("student.dat","r");
    printf("Student details\n");
    while((fscanf(fp,"%d %[^\t] %d %c",&s.roll,s.name,&s.age,&s.gender))!=EOF)
    {
        printf("\n%4d %-20s %4d %1c",s.roll,s.name,s.age,s.gender);
    }
    printf("\n");
    fclose(fp);
}