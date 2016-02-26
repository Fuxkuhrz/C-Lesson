#include <stdio.h>
#include <conio.h>

main(){

       printf("Temperature Converter\n\n");
       
       int choice;
       float temp, result;

       printf("1.Celsius to Fahrenhite\n");
       printf("2.Fahrenhite to Celsius\n");
       printf("3.Celsius to Kelvin\n");
       printf("4.Kelvin to Fahrenhite\n\n");
       
       
       printf("Please select your choice to convert : ");
       scanf("%d", &choice);
       
       if(choice==1){
                     printf("\n\n1.Celsius to Fahrenhite\n");
                     printf("input Celsius temperature : ");
                     scanf("%f", &temp);
                     result=(1.8*temp)+32;
		             printf("Fahrenhite is : %.2f",result);
                      
            }
       else if(choice==2){
                     printf("\n\n2.Fahrenhite to Celsius\n");
                     printf("input Fahrenhite temperature : ");
                     scanf("%f", &temp);
                     result=0.5555*(temp-32);
		             printf("Celsius is : %.2f",result);
            
            }
       else if(choice==3){
                     printf("\n\n3.Celsius to Kelvin\n");
                     printf("input Celsius temperature : ");
                     scanf("%f", &temp);
                     result=temp+273.15;
		             printf("Kelvin is : %.2f",result);
            
            }
       else if(choice==4){
                     printf("\n\n3.Kelvin to Fahrenhite\n");
                     printf("input Kelvin temperature : ");
                     scanf("%f", &temp);
                     result=temp*1.8-459.69;
		             printf("Fahrenhite is : %.2f",result);
            
            }
       else{
                     printf("\n\nUnknow Choice..Please select new choice..\n\n");
            }

getch();

}
