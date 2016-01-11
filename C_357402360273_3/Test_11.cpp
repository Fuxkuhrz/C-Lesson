#include <stdio.h>
#include <conio.h>
#define DKM 50
#define PRC 500
main(){
       
       int km, net_price;
       printf("\t\t\t--------------------------------\n");
       printf("\t\t\t----------[TAXI METER]----------\n");
       printf("\t\t\t--------------------------------\n\n");
       printf("\t\t\t__>>_> Enter your KM : ");
       scanf("%d", &km);
       
       if(km <= DKM){
             net_price = PRC;
       }
       else{
            net_price = (km * 4) + PRC;
            
       }
       printf("\t\t\t__>>_> Your price is : %d", net_price);
       printf("\n\n\t\t\t--------------------------------\n\n");
       
       getch();
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       }
