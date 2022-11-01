#include<stdio.h>


struct student
{
    char name[40];
    int id;
    float height;
}stu1;

void display(int *id )
{
    
    printf("\nThe data of the students are:\n\n");
    printf("\nId :- %d",*id);
    
    
}
int main()
{
    
        printf("Enter the data for student " );
        printf("\nEnter the student Name :- ");
        scanf("%s",&stu1.name);
        printf("\nId :- ");
        scanf("%d",&stu1.id);
        printf("\nHeight :- " );
        scanf("%f",&stu1.height);
        display(&stu1.id);
}