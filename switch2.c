if(currencyChoice == 1){
 printf("Please enter the USD amount: \n");
 scanf("%d",&userinputUSDtoEuro);
 USDtoEURO = userinputUSDtoEuro * 0.87;
 printf("--->Euro: %.2f",USDtoEURO);
 }
 else if(currencyChoice == 2){
 printf("Please enter the USD amount: \n");
 scanf("%d",&userinputUSDtoJPY);
 USDtoJPY = userinputUSDtoJPY * 111.09;
 printf("--->JPY: %.2f",USDtoJPY);
 }
 else if(currencyChoice == 3) {
 printf("Please enter the INR amount: \n");
 scanf("%d",&userinputINRtoEuro);
 INRtoEuro = userinputINRtoEuro / 84.39;
 printf("--->Euro: %.2f",INRtoEuro);
 }
 else if(currencyChoice == 4) {
 printf("Please enter the INR amount: \n");
 scanf("%d",&userinputINRtoUSD);
 INRtoUSD = userinputINRtoUSD / 81.64;
 printf("--->USD: %.2f",INRtoUSD);
 }
 else
 printf("!!! Please enter correct choice. !!!\n");
 }
 else if(category == 'M'){
 printf("------- Welcome to Mass Converter! -------\n");
 printf("\n");
 printf("Choose from the list of conversations: \n");
 printf("\n");
 printf("--->Enter 1 for ounces to pounds. \n");
 printf("--->Enter 2 for gram to pounds. \n");
 printf("--->Enter 3 for Kg to grams. \n");
 scanf("%d",&massChoice);
 if(massChoice == 1){
 printf("Please enter the ounce amount: \n");
 scanf("%d",&userinputOunce);
 ounceToPounds = userinputOunce * 0.0625;
 printf("--->Pounds: %.2f",ounceToPounds);
 }
 else if(massChoice == 2) {
 printf("Please enter the gram amount: \n");
 scanf("%d",&userinputGram);
 gramsToPounds = userinputGram * 0.00220462;
 printf("--->Pounds: %.2f",gramsToPounds);
 }
 else if(massChoice == 3) {
 printf("Please enter the KiloGram amount: \n");
 scanf("%f",&userinputKgs);
 KgsToGrams = userinputKgs * 1000;
 printf("--->Grams: %.2f",KgsToGrams);
 }
 else
 printf("!!! Please enter the correct choice. !!!\n");
 }
 else
 printf("!!! Please enter the correct choice. !!!\n");
 return 0;
}
