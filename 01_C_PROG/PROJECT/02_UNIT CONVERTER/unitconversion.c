#include <stdio.h>

int main() {
  char category;
  int tempChoice, currencyChoice, massChoice,userinputF,userinputC, userinputUSDtoEuro, userinputUSDtoJPY; 
  int userinputUSDtoRS, userinputpound, userinputGram,fahrenheitToCelcius ,celciusToFahrenheit;
  float USDtoEURO ,USDtoJPY ,USDtoRS ,poundtokg ,gramsToPounds ;

  printf("Welcome to Unit Converter! \n");
  top:
  printf("Here is a list of conversation to choose from: \n");
  printf("Temperature(T),Currency(C),Mass(M) \n");
  printf("Please enter the letter you want to convert.\n");
  scanf("%c",&category);
  
  if(category == 'T'){
      printf("Welcome to Temperature Converter! \n");
      top1:
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Fahrenheit to Celsius. \n");
      printf("Enter 2 for Celsius to Fahrenheit. \n");
      scanf("%d",&tempChoice);
      if(tempChoice == 1){
          printf("Please enter the Fahrenheit degree: \n");
          scanf("%d",&userinputF);
          fahrenheitToCelcius =  ((userinputF-32) * (5.0/9.0));
          printf("Celcius: %d",fahrenheitToCelcius);
      }
      else if(tempChoice == 2){
        printf("Please enter the Celcius degree: \n");
        scanf("%d",&userinputC);
        celciusToFahrenheit = ((9.0/5.0)*userinputC + 32);
        printf("Fahrenheit: %d",celciusToFahrenheit);
      }
      else
      {
        printf("Please enter the correct choice. \n");
        goto top1;
      }
  }
  
  else if(category == 'C') {
      printf("Welcome to Currency Converter! \n");
      top2:
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for USD to Euro. \n");
      printf("Enter 2 for USD to JPY. \n");
      printf("Enter 3 for USD to RUPEES. \n");
      scanf("%d",&currencyChoice);
      if(currencyChoice == 1){
          printf("Please enter the USD amount: \n");
          scanf("%d",&userinputUSDtoEuro);
          USDtoEURO = userinputUSDtoEuro * 1.03;
          printf("Euro: %.2f",USDtoEURO); 
      }
      else if(currencyChoice == 2){
          printf("Please enter the USD amount: \n");
          scanf("%d",&userinputUSDtoJPY);
          USDtoJPY = userinputUSDtoJPY * 145.45;
          printf("JPY: %.2f",USDtoJPY);
      }
      else if(currencyChoice == 3) {
        printf("Please enter the USD amount: \n");
        scanf("%d",&userinputUSDtoRS);
        USDtoRS = userinputUSDtoRS * 82.74;
        printf("RS: %.2f",USDtoRS);
      }
      else
      {
        printf("Please enter the correct choice. \n");
        goto top2;
      }
   }
  else if(category == 'M'){
      printf("Welcome to Mass Converter! \n");
      top3:
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for pounds TO KG. \n");
      printf("Enter 2 for gram to pound. \n");
      scanf("%d",&massChoice);
      if(massChoice == 1){
          printf("Please enter the pounds amount: \n");
          scanf("%d",&userinputpound);
          poundtokg = userinputpound * 0.0625;
          printf("Kg: %.2f",poundtokg);
      }
      else if(massChoice == 2) {
          printf("Please enter the gram amount: \n");
          scanf("%d",&userinputGram);
          gramsToPounds = userinputGram * 0.00220462;
          printf("Pounds: %.2f",gramsToPounds);
      }
      else
      {
        printf("Please enter the correct choice. \n");
        goto top3;
      }
   }
   else
    {
        printf("Please enter the correct choice. \n");
        goto top;
    }
  return 0;
}