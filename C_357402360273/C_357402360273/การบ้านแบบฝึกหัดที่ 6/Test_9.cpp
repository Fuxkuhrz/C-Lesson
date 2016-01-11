#include <stdio.h>
#include <conio.h>
#define DPR 35
#define DF  1

main(){
       float km;
       float price;
       float nex;
       
       printf("Enter KM : ");
       scanf("%f", &km);
       
       if(km>=0 && km<=1){
       price = DPR;      
       }
       else if(km>=2 && km<=12){
       nex = km - DF;
       price = nex * 5 + DPR;
       }
       else if(km>=13 && km<=20){
       nex = km - DF;
       price = nex * 5.5 + DPR;
       }
       else if(km>=21 && km<=40){
       nex = km - DF;
       price = nex * 6 + DPR;
       }
       else if(km>=41 && km<=60){
       nex = km - DF;
       price = nex * 6.5 + DPR;
       }
       else if(km>=61 && km<=80){
       nex = km - DF;
       price = nex * 7.5 + DPR;
       }
       else{
       nex = km - DF;
       price = nex * 8.5 + DPR;
       }
       
       printf("Your price is : %.2f", price);
       
       printf("\n\nPress any key to exit.");
       getch();
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       }
