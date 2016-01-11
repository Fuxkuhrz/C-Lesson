#include <stdio.h>
#include <conio.h>

main(){
       
       
       
       int a,b,c,d,e,f,max;
       
       printf("Enter A : ");
       scanf("%d", &a);
       printf("Enter B : ");
       scanf("%d", &b);
       printf("Enter C : ");
       scanf("%d", &c);
       printf("Enter D : ");
       scanf("%d", &d);
       printf("Enter E : ");
       scanf("%d", &e);
       printf("Enter F : ");
       scanf("%d", &f);
       
       if(a>b && a>c && a>d && a>e && a>f){
            max = a;
       }
       else if(b>a && b>c && b>d && b>e && b>f){
            max = b;
       }
       else if(c>a && c>b && c>d && c>e && c>f){
            max = c;
       }
       else if(d>a && d>b && d>c && d>e && d>f){
            max = d;     
       }
       else if(e>a && e>b && e>c && e>d && e>f){
            max = e;
       }
       else {
            max = f;
       }
       
       printf("\nMAX is %d", max);
       
       
       
       
       
       printf("\n\nPress any key to exit.");
       getch();
       
       
       
       
       
       
       
       
       
       
       
       
       
       }
