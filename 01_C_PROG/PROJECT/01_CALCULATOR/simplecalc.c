#include <stdio.h>  
int main()  
{   
    char op;  
    int num1, num2;   
    float result;
    top:  
    printf ("\nChoose an operator(+, -, *, /) to perform the operation in C Calculator \n ");  
    scanf ("%c", &op); 
    
    if (op == '/' )  
    {  
        printf ("\nYou have selected: Division");  
    }  
    else if (op == '*')  
    {  
        printf ("\nYou have selected: Multiplication");  
     }  
       
    else if (op == '-')  
    {  
        printf ("\nYou have selected: Subtraction");  
    }  
    else if (op == '+')  
    {  
        printf ("\nYou have selected: Addition");  
    }
    else
    {
        printf("\nInvalid Operator choice !!! Renter the choice from the list shown !!!\n");
    }     
     
      
    switch(op)  
    {  
        case '+':
            printf ("\nEnter the first number: ");  
            scanf(" %d", &num1);  
            printf ("\nEnter the second number: ");  
            scanf (" %d", &num2);  
            result = num1 + num2; 
            printf ("\nAddition of %d and %d is: %.2f", num1, num2, result);  
            break;  
          
        case '-':  
            printf ("\nEnter the first number: ");  
            scanf(" %d", &num1);  
            printf ("\nEnter the second number: ");  
            scanf (" %d", &num2);
            result = num1 - num2; 
            printf ("\nSubtraction of %d and %d is: %.2f", num1, num2, result);  
            break;  
              
        case '*':  
            printf ("\nEnter the first number: ");  
            scanf(" %d", &num1);  
            printf ("\nEnter the second number: ");  
            scanf (" %d", &num2);
            result = num1 * num2;  
            printf ("\nMultiplication of %d and %d is: %.2f", num1, num2, result);  
            break;            
          
        case '/':  
            printf ("\nEnter the first number: ");  
            scanf(" %d", &num1);  
            printf ("\nEnter the second number: ");  
            scanf (" %d", &num2);
            if (num2 == 0)   
            {  
                printf ("\nDivisor cannot be zero. Please enter another value ");  
                scanf ("%d", &num2);        
                }  
            result = num1 / num2;  
            printf ("\nDivision of %d and %d is: %.2f", num1, num2, result);  
            break;  
        default:  
            printf ("\nSomething is wrong!! Please check the options ");
            goto top;               
    }  
    return 0;  
}  