#include <stdio.h>
void grade()
{
    int marks;

    printf("Enter total marks in 5 subjects: ");
    scanf("%d", &marks);
    if(marks > 420 )
    {
        printf("Your scored grade is : - A");
    }
    else if(marks > 350 )
    {
        printf("Your scored grade is : - B");
    }
    else if(marks > 270 )
    {
        printf("Your scored grade is : - C");
    }
    else if(marks > 200 )
    {
        printf("Your scored grade is : - D");
    }
    
    else
    printf("Sorry you Failed !!! Your scored grade is : - F");

}