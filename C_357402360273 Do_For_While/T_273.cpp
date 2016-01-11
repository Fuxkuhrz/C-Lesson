#include <stdio.h>
#include <conio.h>

main(){
       
       char name[20];
       float price_sale, bonus_rate, bonus;
       
       
       printf("Input Name : ");
       scanf("%s", name);
       printf("Input Price_Sale : ");
       scanf("%f", &price_sale);
       
       
       if(price_sale >= 100000){
            bonus_rate = 0.15;
       }
       else if(price_sale >= 70000){
            bonus_rate = 0.10;
       }
       else if(price_sale >= 50000){
            bonus_rate = 0.07;
       }
       else if(price_sale >= 20000){
            bonus_rate = 0.05;
       }
       else{
            bonus_rate = 0.02;
       }
       
       bonus = price_sale * bonus_rate;
       
       printf("\n===================================");
       printf("\nBonus_rate : = %.2f", bonus_rate);
       printf("\nBonus : = %.2f", bonus);
       
       
       
       getch();
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       }
