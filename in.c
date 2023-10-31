#include <stdio.h>
int main() {
 char category;
 int tempChoice;
 int currencyChoice;
 int massChoice;
 int userinputF;
 int userinputC;
 int userinputUSDtoEuro;
 int userinputUSDtoJPY;
 int userinputINRtoEuro;
 int userinputINRtoUSD;
 int userinputOunce;
 int userinputGram;
 float userinputKgs;
 int fahrenheitToCelcius; // variable that stores the converted F->C;
 int celciusToFahrenheit; // variable that stores the converted C->F;
 float USDtoEURO ; // varaible that stores the converted USD->EURO;
 float USDtoJPY; // stores the converted USD->JPY;
 float INRtoEuro; // stores the converted USD->RMB;
 float INRtoUSD; //stores the converted INR->USD;
 float ounceToPounds; // stores the converted Ounce->Pounds;
 float gramsToPounds; // stores the vonerted Grams->Pounds;
 float KgsToGrams; // stores the vonerted Grams->Pounds;
 printf("******* Welcome to Unit Converter! *******\n");
 printf("\n");
 printf("Choose a conversion Operation: \n");
 printf("\n");
 printf("--->Temperature - (T)\n--->Currency - (C)\n--->Mass - (M) \n");
 printf("Please enter the letter you want to convert.\n");
 scanf("%c",&category);

 if(category == 'T'){
 printf("------- Welcome to Temperature Converter! --------\n");
 printf("Enter 1 for Fahrenheit to Celsius. \n");
 printf("Enter 2 for Celsius to Fahrenheit. \n");
 scanf("%d",&tempChoice);
