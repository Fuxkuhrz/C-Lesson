#include <stdio.h>
#include <conio.h>

main(){
       
       int year, ths_year, brt_year;
       
       printf("Please insert this year : ");
       scanf("%d", &ths_year);
       printf("What year were you born ? : ");
       scanf("%d", &brt_year);
       
       if(brt_year > ths_year){
       printf("\nPleas insert year.\n");
       printf("Insert in C.E. format.\n");
       }
       else{
       year = ths_year - brt_year;
       printf("\nYou are %d years old.\n", year);
       }
       
       
       getch();
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       }
