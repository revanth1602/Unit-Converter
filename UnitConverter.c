#include <stdio.h>
#include<stdlib.h>

int main() 
{
  char category;
  int tempChoice,VolumeChoice,massChoice,areaChoice,userinputF,userinputC,userinputK,userinputOunce,userinputGram,userinputPound,fahrenheitToCelcius,celciusToFahrenheit,C_to_K,K_to_C,F_to_K,K_to_F,lengthChoice;
 
  float miles,kilometers,feet,meters,userinputGallons,userinputLitres,userinputCubic_meters,gramtoounce,userinputAcre,userinputHectare,userinputSqmetres,AcretoHectare,HectaretoAcre,SqmetretoAcre,AcretoSqmetre,HectaretoSqmetre,SqmetretoHectare,poundstograms,poundstoounce,Cubic_meterstoLlitres,ounceToPounds,ouncetograms,LitrestoGallons,LitrestoCubic_meters,Cubic_meterstoGallons,GallonstoCubic_meters,gramsToPounds,GallonstoLitres; 
  while(1)
  {
      printf("\t\n*********************\n\t");
      printf("\t\nWelcome to Unit Converter! \n");
      printf("Here is a list of options to choose from: \n");
      printf("Temperature(T),Mass(M),Length(L),Area(A),volume(V),exit(0) \n");
      printf("Please enter the letter you want to convert.\n");
      scanf("%c",&category);
  
      if(category == 'T' || category == 't'){
      printf("Welcome to Temperature Converter! \n");
      printf("Here is a list of options to choose from: \n");
      printf("Enter 1 for Fahrenheit to Celsius. \n");
      printf("Enter 2 for Celsius to Fahrenheit. \n");
      printf("Enter 3 for Kelvin to Fahrenheit. \n");
      printf("Enter 4 for Fahrenheit to Kelvin. \n");
      printf("Enter 5 for Kelvin to Celsius. \n");
      printf("Enter 6 for Celsius to Kelvin. \n");
      
      scanf("%d",&tempChoice);
      switch(tempChoice)
      {
          case 1:
          printf("Please enter the Fahrenheit degree: \n");
          scanf("%d",&userinputF);
          fahrenheitToCelcius =  ((userinputF-32) * (5.0/9.0));
          printf("Celsius: %d",fahrenheitToCelcius);
          break;
          
          case 2:
          printf("Please enter the Celsius degree: \n");
          scanf("%d",&userinputC);
          celciusToFahrenheit = ((9.0/5.0)*userinputC + 32);
          printf("Fahrenheit: %d",celciusToFahrenheit);
          break;
          
          case 3:
          printf("Please enter the Kelvin degree: \n");
          scanf("%d",&userinputK);
          K_to_F=((userinputK-273.15) * 9/5 + 32);
          printf("Fahrenheit: %d",K_to_F);
           break;
           
          case 4:
          printf("Please enter the Fahrenheit degree: \n");
          scanf("%d",&userinputF);
          F_to_K=((userinputF - 32) / 1.8 + 273.15);
          printf("Kelvin: %d",F_to_K);
            break;
            
          case 5:
          printf("Please enter the Kelvin degree: \n");
          scanf("%d",&userinputK);
          K_to_C= (userinputK - 273.15);
          printf("Celsius: %d",K_to_C);
          break;
          
          case 6:
          printf("Please enter the Celcius degree: \n");
          scanf("%d",&userinputC);
          C_to_K=userinputC + 273.15;
          printf("Kelvin: %d",C_to_K);
          break;
          
          default:
          printf("Please enter the correct choice. \n");
          
          
      }
      }
      else if(category == 'M' || category == 'm')
      {
      printf("Welcome to Mass Converter! \n");
      printf("Here is a list of options to choose from: \n");
      printf("Enter 1 for ounces to pounds. \n");
      printf("Enter 2 for grams to pounds. \n");
      printf("Enter 3 for pounds to grams. \n");
      printf("Enter 4 for grams to ounces. \n");
      printf("Enter 5 for pounds to ounces. \n");
      printf("Enter 6 for ounces to grams. \n");
      
      scanf("%d",&massChoice);
      switch(massChoice)
      {
          case 1:
          printf("Please enter the ounce amount: \n");
          scanf("%d",&userinputOunce);
          ounceToPounds = userinputOunce * 0.0625;
          printf("Pounds: %.2f",ounceToPounds);
          break;
      
          case 2:
          printf("Please enter the gram amount: \n");
          scanf("%d",&userinputGram);
          gramsToPounds = userinputGram * 0.00220462;
          printf("Pounds: %.2f",gramsToPounds);
          break;
          
          case 3:printf("Please enter the pounds amount: \n");
          scanf("%d",&userinputPound);
          poundstograms = userinputPound * 453.5923;
          printf("grams: %.2f",poundstograms);
          break;
          
          case 4:printf("Please enter the grams amount: \n");
          scanf("%d",&userinputGram);
          gramtoounce=userinputGram * 28.3495;
          printf("ounces: %.2f",gramtoounce);
          break;
          case 5:printf("Please enter the pounds amount: \n");
          scanf("%d",&userinputPound);
          poundstoounce=userinputPound * 16;
          printf("ounces: %.2f",poundstoounce);
          break;
          case 6:printf("Please enter the ounce amount: \n");
          scanf("%d",&userinputOunce);
          ouncetograms = userinputOunce * 28.3495231;
          printf("grams: %.2f",ouncetograms);
          break;
          
      
          default:printf("Please enter the correct choice! \n");
                 
      }
  
      
      }
      else if(category == 'L' || category == 'l')
      {
      printf("Welcome to Length Converter! \n");
      printf("Here is a list of options to choose from: \n");
      printf("Enter 1 for miles to kilometres. \n");
      printf("Enter 2 for kilometres to miles. \n");
      printf("Enter 3 for feet to metres. \n");
      printf("Enter 4 for metres to feet. \n"); 
      scanf("%d",&lengthChoice);
      switch(lengthChoice)
      {
          case 1:printf("Enter distance in miles: ");
          scanf("%f", &miles);
          kilometers = miles * 1.60934;
          printf("%.2f miles is equal to %.2f kilometers.\n", miles, kilometers);
          break;
          case 2:printf("Enter distance in kilometers: ");
          scanf("%f", &kilometers);
          miles = kilometers * 0.621371;
          printf("%.2f kilometers is equal to %.2f miles.\n", kilometers, miles);
          break;
          case 3: printf("Enter distance in meters: ");
          scanf("%f", &meters);
          printf("%.2f meters is equal to %.2f feet.\n", meters, feet);
          break;
          case 4: printf("Enter distance in feet: ");
          scanf("%f", &feet);
          meters = feet / 3.281;
          printf("%.2f feet is equal to %.2f meters.\n", feet, meters);
          break;
          
          default:printf("Please enter the correct choice! \n");

      }
      }
      else if(category =='A' || category == 'a')
      {
          printf("Welcome to Area Converter! \n");
      printf("Here is a list of options to choose from: \n");
      printf("Enter 1 for acres to hectares. \n");
      printf("Enter 2 for sq.metres to acres. \n");
      printf("Enter 3 for hectares to acres. \n");
      printf("Enter 4 for acres to sq.metres. \n"); 
      printf("Enter 5 for hectares to sq.metres. \n"); 
      printf("Enter 6 for sq.metres to hectares. \n");
      scanf("%d",&areaChoice);
      switch(areaChoice)
      {
          case 1:
          printf("Please enter the acres : \n");
          scanf("%f",&userinputAcre);
          AcretoHectare = userinputAcre * 0.40468564;
          printf("Hectares: %.2f",AcretoHectare);
          break;
          case 2:
          printf("Please enter the sq.metres : \n");
          scanf("%f",&userinputSqmetres);
          SqmetretoAcre = userinputSqmetres * 0.00024711;
          printf("Acres: %.2f",SqmetretoAcre);
          break;
          case 3:
          printf("Please enter the hectares : \n");
          scanf("%f",&userinputHectare);
          HectaretoAcre = userinputHectare * 2.47105381;
          printf("Acres: %.2f",HectaretoAcre);
          break;
          case 4:
          printf("Please enter the acres : \n");
          scanf("%f",&userinputAcre);
          AcretoSqmetre = userinputAcre * 4046.85642;
          printf("Sqmetres: %.2f",AcretoSqmetre);
          break;
          case 5:
          printf("Please enter the hectares : \n");
          scanf("%f",&userinputHectare);
          HectaretoSqmetre = userinputHectare * 10000;
          printf("Sqmetres: %.2f",HectaretoSqmetre);
          break;
          case 6:
          printf("Please enter the sq.metres : \n");
          scanf("%f",&userinputSqmetres);
          SqmetretoHectare = userinputSqmetres * 0.0001;
          printf("Hectares: %.2f",SqmetretoHectare);
          break;
          
          default:printf("Please enter the correct choice! \n");
      }
      
      }
      else if(category=='V' || category=='v')
      {
          printf("Welcome to Volume Converter! \n");
      printf("Here is a list of options to choose from: \n");
      printf("Enter 1 for cubic meters to litres. \n");
      printf("Enter 2 for litres to gallons. \n");
      printf("Enter 3 for litres to cubic meters. \n");
      printf("Enter 4 for cubic meters to gallons. \n"); 
      printf("Enter 5 for gallons to cubic meters. \n"); 
      printf("Enter 6 for gallons to litres. \n");
      scanf("%d",&VolumeChoice);
      switch(VolumeChoice)
      {
          case 1:
          printf("Please enter the cubic meters : \n");
          scanf("%f",&userinputCubic_meters);
          Cubic_meterstoLlitres = userinputCubic_meters * 1000;
          printf("Litres: %.2f",Cubic_meterstoLlitres);
          break;
          case 2:
          printf("Please enter the litres : \n");
          scanf("%f",&userinputLitres);
          LitrestoGallons = userinputLitres * 0.26417205;
          printf("Gallons: %.2f",LitrestoGallons);
          break;
          case 3:
          printf("Please enter the litres : \n");
          scanf("%f",&userinputLitres);
          LitrestoCubic_meters = userinputLitres * 0.001;
          printf("Cubic Meters: %.2f",LitrestoCubic_meters);
          break;
          case 4:
          printf("Please enter the cubic meters : \n");
          scanf("%f",&userinputCubic_meters);
          Cubic_meterstoGallons = userinputCubic_meters * 264.172052;
          printf("Gallons: %.2f",Cubic_meterstoGallons);
          break;
          case 5:
          printf("Please enter the gallons : \n");
          scanf("%f",&userinputGallons);
          GallonstoCubic_meters = userinputGallons * 0.00378541;
          printf("Cubic Meters: %.2f",GallonstoCubic_meters);
          break;
          case 6:
          printf("Please enter the gallons : \n");
          scanf("%f",&userinputGallons);
          GallonstoLitres = userinputGallons * 3.78541178;
          printf("Liters: %.2f",GallonstoLitres);
          break;
          
          default:printf("Please enter the correct choice! \n");
      }
      
      }
      
      else if(category == '0')
      {
          exit(0);
      }
  
    }

  return 0;

}