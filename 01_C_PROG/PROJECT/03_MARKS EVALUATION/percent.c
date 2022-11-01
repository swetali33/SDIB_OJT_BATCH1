#include <stdio.h>

void percent()
{
    int totalmarks,nosub;
    float avg;

    /* Input unit consumed from user */
    printf("Enter total marks in 5 subjects: ");
    scanf("%d", &totalmarks);


    /* Calculate Percentage */
    avg = totalmarks / 5;
    

    printf("Your percentage is :- %.2f ", avg);

}