#include<stdio.h>
int main()
{
    char c;
    printf("Enter a char:\n");
    scanf("%c",&c);

    if((c >= 'a' && c <='z') || (c >='A' && c <='z'))
    {
        printf("ALPHABET");
    }
    else 
    {
        printf("NOT AN ALPHABET");
    }
}