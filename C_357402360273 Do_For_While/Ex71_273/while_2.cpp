#include <stdio.h>
#include <conio.h>


main(){
       
       int y, x, p;
       int n = 2;
       
       
       
       printf("Input Data : ");
       scanf("%d", &x);
       printf("Input Power : ");
       scanf("%d", &p);
       
       y = x;
       
      do{
       y = x*y;        
       printf("\n%3d\n", n);        
       printf("%d = %d\n", x, y);
       n = n+1;
       }while(n<=p);
       
      
       
       getch();
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       }
