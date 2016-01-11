#include <stdio.h>
#include <conio.h>


main(){
       int sum, income, balance, a_balance, avrg;
       int i, d;
       int r = 2;
       
       while(r == 2){
       sum = 0, income = 0, balance = 0, a_balance = 0, avrg = 0;
       i = 1; 
       d = 1;
       printf("=======================\n");
       printf("SIMPLE WEEK CALCULAT\n"); 
       printf("=======================\n");
       printf("Income : ");
       scanf("%d", &income);
       
     
       
       while(i<=7){
       printf("\nDay_%d : ", d);        
       scanf("%d", &balance);
       
       a_balance = income - balance;
       
       printf(" _Balance is : %d", a_balance);         
       income = a_balance;
       sum = sum + balance;
       i = i + 1;
       d = d + 1;          
       }
       avrg = sum/7;
       printf("\n\nSum is %d", sum);
       printf("\nAverage is %d", avrg);
       
       
       
       printf("\n\nDo you want to exit program [1->Yes || 2->No] : ");
       scanf("%d", &r);
       
       
       }
       //getch();
       
       
       
       
       
       
       }
