#include<stdio.h>
int main()
{
    int a,b,choice;
    back:
     
     printf("\n 1. Addition");
     printf("\n 2. Subtraction");
     printf("\n 3. Multipication");
     printf("\n 4. Division");
     printf("\n Enter Your choice :");
     scanf("%d",&choice);
     printf("Enter any 2 number :");
     scanf("%d %d",&a ,&b);
     switch(choice)
     {
        case 1:
             printf("\n Sum of 2 number %d\n",a+b);
             break;
        case 2:
             printf("\n Differnce of 2 number %d\n",a-b);
             break;
        case 3:
             printf("\n Multi of 2 number %d\n",a*b);
             break;
        case 4:
             printf("\n Division of 2 number %d\n",a/b);
             break;

        default:
             printf("Invalid choice");
             goto back;
     }
     return 0;
}
