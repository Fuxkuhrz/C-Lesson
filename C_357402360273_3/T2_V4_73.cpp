#include <stdio.h>
#include <conio.h>

main(){
       
       char name[20];
       int rent_m, num_m, rent_y;
       //
       printf("\t\t\t**********************************\n\n");
       //
       printf("\t\t\t  >> Enter Your Name : ");
       scanf("%s", name);
       //
       printf("\t\t\t  >> Enter Your Rent_M : ");
       scanf("%d", &rent_m);
       //
       printf("\t\t\t  >> Enter Your Num_M : ");
       scanf("%d", &num_m);
       //
       printf("\n\t\t\t**********************************\n\n");
       //
       rent_y = rent_m * num_m;
       printf("\t\t\t  >> Rent_Y : %d", rent_y);
       //
       printf("\n\n\t\t\t**********************************");
       //
       
       printf("\n\n\t\t\tPress any key to exit....");
       getch();
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       }
