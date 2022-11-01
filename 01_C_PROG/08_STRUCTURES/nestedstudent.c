#include<stdio.h>
struct marks
{
    int math;
    int phy;
    int chem;
    int total;
    float avg;
};

struct stu
{
    int id;
    char name[10];
    float height;
    struct marks m;
    
}stu;
int main()
{
    
        printf("Enter the data for student:");

        printf("\nEnter the student Name :- ");
        scanf("%s",&stu.name);

        printf("\nEnter the id :- ");
        scanf("%d",&stu.id);

        printf("\nHeight :- ");
        scanf("%f",&stu.height);

        printf("\nmath marks :- " );
        scanf("%d",&stu.m.math);

        printf("\nphy marks :- " );
        scanf("%d",&stu.m.phy);

        printf("\nchem marks :- " );
        scanf("%d",&stu.m.chem);

        stu.m.total=stu.m.math+stu.m.phy+stu.m.chem;
        stu.m.avg=stu.m.total/3;
       

    
        printf("\nData for student ");

        printf("\nName :- %s ",stu.name );

        printf("\nId :- %d",stu.id);

        printf("\nHeight :- %f",stu.height);

        printf("\n Math marks :-%d",stu.m.math );

        printf("\n phy marks :-%d",stu.m.phy );

        printf("\n chem marks :-%d",stu.m.chem );

        printf("\n total marks :-%d",stu.m.total);

        
        printf("\n Avg marks :-%f",stu.m.avg);


        
        
}
