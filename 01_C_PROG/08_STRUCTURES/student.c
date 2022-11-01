#include<stdio.h>

struct stu
{
    int id;
    char name[10];
    float height;
    
}stu1[2];

int main()
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("\nEnter the data for student %d:",i+1);
        printf("\nEnter the student name %d:",i+1);
        scanf("%s",&stu1[i].name);
        printf("\nEnter the student id %d :",i+1);
        scanf("%d",&stu1[i].id);
        printf("\nEnter the student height %d :",i+1);
        scanf("%f",&stu1[i].height);
    }
     for(i=0;i<3;i++)
    {
        printf("\nData for student %d:",i+1);

        printf("\nstudent name :%s",stu1[i].name);
        
        printf("\nstudent id :%d",stu1[i].id);
        
        printf("\nstudent height :%f",stu1[i].height);
    }

}