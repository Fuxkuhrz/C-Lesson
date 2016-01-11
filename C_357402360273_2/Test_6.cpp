#include <stdio.h>
#include <conio.h>
main(){
       
       char name[30];
       int income, expenses, balance;
       //
       printf("Enter your name : ");
       scanf("%s", name);
       //
       printf("Enter your Income : ");
       scanf("%d", &income);
       //
       printf("Enter your Expenses : ");
       scanf("%d", &expenses);
       //
       printf("---------------------------\n");
       //
       balance = income - expenses;
       
       printf("\nBalance : %d\n\n", balance);
       //
       printf("Press any key to exit.");
       getch();
       
       
       
       
       
       
       
       
       
       }
