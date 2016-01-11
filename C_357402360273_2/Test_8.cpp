#include <stdio.h>
#include <conio.h>

main(){
       
       int x, y, z = 0;
       
       printf("Input X : ");
       scanf("%d", &x);
       printf("Input Y : ");
       scanf("%d", &y);
       
       if(x > y){
       z = x - y;
       printf("X - Y : %d ", z);
       }
       else{
       z = x + y;
       printf("X + Y : %d", z);     
       }
       
       getch();
       
       }
