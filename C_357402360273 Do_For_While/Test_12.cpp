#include <stdio.h>
#include <conio.h>
#define DMN 400
#define TM 499
#define VAT 0.07


main(){
       
       int ct, ctp, delx;
       printf("\t\t\tTELE Cal\n\n");
       printf("\t\t\tInput your call time : ");
       scanf("%d", &ct);
       
       if(ct <= DMN){
             ctp = TM;
       }
       else{
            delx = ct - DMN;
            ctp = (delx * 2) + TM;
            ctp = ctp + (ctp * VAT);
            
            
                
       }
       printf("\t\t\tYour call price is : %d", ctp);
       
       
       getch();
       
       
       
       
       
       
       
       
       
       
       
       
       
       }
