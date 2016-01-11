#include <stdio.h>
#include <conio.h>


main(){
       int time = 0;
       int minutes = 0;
       int hours = 0;
       int days = 0;
       
       printf("Enter minute : ");
       scanf("%d", &time);
       
       hours = time/60%24;
       days = time/1440;
       minutes = time%60;
       
       
       printf("%d minute is : %d days %d hours and %d minutes", time, days, hours, minutes);
       
       
       
       
       
       getch();
            
       
       
       }
