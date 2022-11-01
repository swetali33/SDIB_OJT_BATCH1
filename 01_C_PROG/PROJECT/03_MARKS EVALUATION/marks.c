#include <stdio.h>
#include"marks.h"
int main()
{
    top:
    printf("\nEnter your choice :- ");
    printf("\n1.Percent\n2.Grade\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("Welcome to Percentage Calculator !!!!\n");
            percent();
            break;
        case 2:
            printf("Welcome to Grade Calculator !!!!\n");
            grade();
            break;
        default:
            printf("Invalid Choice!!!! Enter a valid option\n");
            goto top;
    }
}