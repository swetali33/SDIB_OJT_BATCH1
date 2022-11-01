#include<stdio.h>


struct employee
{
    char name;
    int id;
    float salary;
    //char desi;
}emp1;

int main()
{
    
        printf("Enter the data for employee:");
        printf("\nEnter the employee Name :- ");
        scanf("%s",&emp1.name);
        printf("\nId :- ");
        scanf("%d",&emp1.id);
        printf("\nsalary :- " );
        scanf("%f",&emp1.salary);
       // printf("\ndesignation :- " );
       // scanf("%s",&emp1.desi);

    
        printf("\nData for employee ");
        printf("\nName :- %c ",emp1.name );
        printf("\nId :- %d",emp1.id);
        printf("\nsalary :- %f",emp1.salary );
        //printf("\ndesignation :- %s",emp1.desi );

        printf("\nThe size of %d",(sizeof(emp1)));
        
}