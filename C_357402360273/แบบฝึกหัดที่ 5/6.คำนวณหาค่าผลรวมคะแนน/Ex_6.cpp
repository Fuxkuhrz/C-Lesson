//code by Anuwat Khongchuai ^_^ 
// AKA >> Elaeis guineensis Jacq. (Palm)
// Score
#include <stdio.h>
#include <conio.h>
main(){
       
       char name[30];
       float mdt_score, fnt_score, tst_score, tt_score;
       //
       printf("\t########################\n\n");
       printf("\tInput Name : ");
       scanf("%s", name);
       //
       printf("\n\tInput Mdterm_Score : ");
       scanf("%f", &mdt_score);
       //
       printf("\n\tInput Final_Score : ");
       scanf("%f", &fnt_score); 
       //
       printf("\n\tInput Test_Score : ");
       scanf("%f", &tst_score);
       
       printf("\n\n\t########################\n\n");
       //
       tt_score = mdt_score + fnt_score + tst_score;
       
       printf("\tTotal_Score : %.1f\n\n", tt_score);
       printf("\t########################\n\n\n");
       //
       printf("\tPress any key to exit");
       getch();
       
       
       
       }
