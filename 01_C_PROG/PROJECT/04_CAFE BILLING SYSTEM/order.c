#include<stdio.h>
#include"cafe.h"

void order()
{
    top:
    printf("\nEnter the item no to add to the order :- ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("\nHot Coffee worth price Rs 150 added to order successfully!");
            person.amt += 150;
            printf("\nEnter O to get the final bill");

            goto top;
        case 2:
            printf("\nCold Coffee worth price Rs 250 added to order successfully!");
            person.amt += 250;
            printf("\nEnter O to get the final bill");
            goto top;
        case 3:
            printf("\nChoco Shake worth price Rs 220 added to order successfully!");
            person.amt += 220;
            printf("\nEnter O to get the final bill");
            goto top;
        case 4:
            printf("\nPastry worth price Rs 260 added to order successfully!");
            person.amt += 260;
            printf("\nEnter O to get the final bill");
            goto top;
        case 5:
            printf("\nCake worth price Rs 350 added to order successfully!");
            person.amt += 350;
            printf("\nEnter O to get the final bill");
            goto top;
        case 0:
            printf("\nPlease wait for a while calculating the final bill amount..");
            bill();
            break;
        default:
            printf("\nInvalid choice of item !! Please enter a valid item no from the menu !!");
            goto top;
    }
}