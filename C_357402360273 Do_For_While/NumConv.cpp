#include <stdio.h>
#include <conio.h>


main(){
       
       int choice, number;
       int i = 2;
       
       while(i == 2){
       choice = 0, number = 0;
       printf(">>Program Numberic Convertot<<\n");
       printf("1.Decimal\n");
       printf("2.Octal\n");
       printf("3.Hexadecimal\n");
       printf("\n\nEnter your choice to convert [1-3] : ");
       scanf("%d", &choice);
       
       switch(choice){
       
       case 1 : { printf("Enter Value to convert : ");
                  scanf("%d", &number);
                  printf("\n\nValue Number Decimal : %d", number);
                  }
                  break;
       case 2 : { printf("Enter Value to convert : ");
                  scanf("%d", &number);
                  printf("\n\nValue Number Octal : %o", number);
                  }
                  break;
       case 3 : { printf("Enter Value to convert : ");
                  scanf("%d", &number);
                  printf("\n\nValue Number Hexadecimal : %x", number);
                  }
                  break;
       default : printf("\nError!! Enter your choice again.....");
                
                
                
                
                
                
      
       
                
                
       }
       
       printf("\n\nDo you want to exit this program....\n");
       printf("Press 1 : Yes.\n");
       printf("Press 2 : No.\n");
       printf("Enter your choice : ");
       scanf("%d", &i);
       
       
       }
       //getch();
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       }
