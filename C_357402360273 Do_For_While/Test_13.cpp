#include <stdio.h>
#include <conio.h>
#define ET  60

main(){
       
       char name[30];
       float brt_year, st_year, amount;
       float sp_year, pl_money, money;
       float year;
       
       
       printf("Enter Name : ");
       scanf("%s", name);
       printf("Enter Birth's year : ");
       scanf("%f", &brt_year);
       printf("Enter Start's year : ");
       scanf("%f", &st_year);
       printf("Enter Amount : ");
       scanf("%f", &amount);
       
       sp_year = brt_year+ET; 
       year = sp_year - st_year;
       
       if(year >= 15){
            pl_money = (((year-15) * 1.5)+20)/100;
       }
       else{
            pl_money = 20;
       }
       
       money = amount * pl_money;
       
       
       printf("\n\nEnd's year : %.0f\n", sp_year);
       printf("All year : %.0f\n", year);
       printf("Money : %.2f\n", money);
       
       
       getch();
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       }
