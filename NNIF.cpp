#include <stdio.h>
#include <conio.h>
//coded by ปาม ผู้ที่มีอวัยวะเพศใหญ่ที่สุดในทางช้างเผียก

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
       
       if(a>b){
            max = a;
            }
       else{
            if(b>c){
                    max = b;
                    }
            else{
                 if(c>d){
                         max = c;
                         }
                 else{
                      if(d>e){
                              max = d;
                           }
                      else{
                           if(e>f){
                                   max = e;
                                }
                           else{
                                 if(f>a){
                                         max = f;
                                      }
                                 else{
                                         max = a;
                                      }
                                }
                           }
                      }
                 }
            }
            
            
       printf("\nMAX is %d", max);
       
       printf("\n\nPress any key to exit.");
      
           
       getch();
       
       
       
}
