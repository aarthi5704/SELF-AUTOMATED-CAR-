if(category == 'T'){
 printf("------- Welcome to Temperature Converter! --------\n");
 printf("Enter 1 for Fahrenheit to Celsius. \n");
 printf("Enter 2 for Celsius to Fahrenheit. \n");
 scanf("%d",&tempChoice);
 if(tempChoice == 1){
 printf("Please enter the Fahrenheit degree: \n");
 scanf("%d",&userinputF);
 fahrenheitToCelcius = ((userinputF-32) * (5.0/9.0));
 printf("--->Celcius: %d",fahrenheitToCelcius);
 }
 else if(tempChoice == 2){
 printf("Please enter the Celcius degree: \n");
 scanf("%d",&userinputC);
 celciusToFahrenheit = ((9.0/5.0)*userinputC + 32);
 printf("--->Fahrenheit: %d",celciusToFahrenheit);
 }
 else
 printf("!!! Please enter correct choice. !!!\n");
 }

 else if(category == 'C') {
 printf("********* Currency Converter! *********\n");
 printf("Choose a Currency Conversion: \n");
 printf("--->Enter 1 for USD to Euro. \n");
 printf("--->Enter 2 for USD to JPY. \n");
 printf("--->Enter 3 for INR to Euro. \n");
 printf("--->Enter 4 for INR to USD. \n");
 scanf("%d",&currencyChoice);
