#include <stdio.h>
#include <conio.h>

main(){
       
       char name[15];
       int age;
       
       printf("Enter Your name : ");
       scanf("%s", name);
       
       printf("Enter Your Age : ");
       scanf("%d", &age);
       printf("\n");
       printf("==================================\n");
       printf("Hello %s You love Programming.\n", name);
       printf("Your is age : %d\n", age);
       printf("==================================\n");
       
       
       getch();
       
       
       
       
       }
