#include <stdio.h>
#include <conio.h>

main(){
       
       int temper;
       
       printf("Enter your Temperature : ");
       scanf("%d", &temper);
       
       if(temper >= 35){
       printf("Now Temperature is Hot!!\n\n");
       }
       else if(temper >= 25){
       printf("Now Temperature is Normal!!\n\n");
       }
       else if(temper >= 15){
       printf("Now Temperature is Cool!!\n\n");
       }
       else
       printf("Unknow Temperature!!\n\n");
       
       printf("Press any key to exit.");
       getch();
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       }
