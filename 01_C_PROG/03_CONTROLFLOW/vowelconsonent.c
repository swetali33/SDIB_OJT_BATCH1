#include<stdio.h>
int main()
{
    char ch,uppercase,lowercase;
    printf("Enter a character:\n");
    scanf("%c",&ch);

    lowercase=(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch== 'u');
    uppercase=(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch== 'U');

    if(lowercase == 1)
    {
        printf("VOWEL");
    }
    else  if (uppercase == 1)
    {
        printf("VOWEL");
    }
    else{
        printf("CONSONENT");
    }

}