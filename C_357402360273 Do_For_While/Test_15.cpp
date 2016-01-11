#include <stdio.h>
#include <conio.h>

main(){
       
       float x, y;
       int choice;
       
       printf("Temperature Converter\n\n");
       
       printf("Enter Temperature : ");
       scanf("%f", &x);
       
       printf("\n\nPlease select choice\n");
       printf("\n\n1. F to C.\n");
       printf("2. C to F.\n");
       printf("3. K to C.\n");
       printf("4. R to C.\n");
       printf("5. C to R.\n");
       printf("6. C to K.\n");
       printf("7. K to F.\n");
       printf("8. F to K.\n\n");
       
       printf("Enter Choice : ");
       scanf("%d", &choice);
       printf("\n\n");
       
       switch(choice){
       
       case 1 :{
                y = (0.55) * (x - 32);
                printf("%.2f F is %.2f C", x, y);
                }
                break;               
       case 2 :{
                y = (1.8 * x) + 32;
                printf("%.2f C is %.2f F", x, y);
                }
                break;
       case 3 :{
                y = x - 273.15;
                printf("%.2f K is %.2f C", x, y);
                }
                break;
       case 4 :{
                y = x * 1.25;
                printf("%.2f R is %.2f C", x, y);
                }
                break;
       case 5 :{
                y = x * 0.8;
                printf("%.2f C is %.2f R", x, y);
                }
                break;
       case 6 :{
                y = x + 273.15;
                printf("%.2f C is %.2f K", x, y); 
                }
                break;
       case 7 :{
                y = x * 1.8 - 459.69;
                printf("%.2f K is %.2f F", x, y);
                }
                break;
       default :{
                 y = (x + 459.67)/1.8;
                 printf("%.2f F is %.2f K", x, y);  
                 }
       }
       
       
       
       getch();
                      
                      
                      
                      
                      
                      
                      
                      
                      
       }
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
