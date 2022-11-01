#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"cafe.h"
int main()
{
    printf("\nWelcome to SDI CAFE !!!!\n");
    printf("Dear customer please enter your first name: ");
    scanf("%s",&person.name);
    printf("\n%s please choose  items to add to your orders\n",person.name);
    printf("+------------------------+\n");
    printf("|          Menu          |\n");
    printf("+------------------------+\n");
    printf("|   Item     |   Price   |\n");
    printf("+------------------------+\n");
    printf("|1.Hot Coffe |  Rs 150   |\n");
    printf("|2.Cold Coffe|  Rs 250   |\n");
    printf("|3.Choco Shk |  Rs 220   |\n");
    printf("|4.Pastry    |  Rs 260   |\n");
    printf("|5.CAKE      |  Rs 350   |\n");
    printf("+------------------------+\n");
    top1:
    printf("\nPlace an Order:\n1.Yes\n2.No\nEnter Choice no : ");
    scanf("%d",&person.cho);
    printf("\nPlease wait...");

    switch(person.cho)
    {
        case 1:
            order();
            break;
        /*case 'y':
            order();
            break;*/
        case 2:
            printf("Thankyou for visiting us.");
            exit(1);
            break;
        /*case 'n':
            printf("Thankyou for visiting us.");
            exit(1);
            break;*/
        default:
            printf("Sorry Invalid choice !!! Please try again.");
            goto top1;
            break;

    }

}