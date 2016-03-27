#include <stdio.h>
#include <conio.h>

main(){
       
       printf("SIMPLE BRM CALCULATOR\n\n");
       
       //------------------------------------
       float bmr,tdee;
       char name[30];
       int gender,num_tdee,age,weight,height,food_choice=0,calbf,cal,fq=0,callnch,caldinn,sum_cal=0;
       printf("Enter your name : ");
       scanf("%s", name);
       
       printf("Select your gender : \n");
       printf("1.> Male\n");
       printf("2.> Female\n");
       printf("> ");
       scanf("%d", &gender);
       
       //------------------------------------
       printf("\nEnter Your Age: ");
       scanf("%d", &age);
       printf("\nEnter Your Weight(kg): ");
       scanf("%d", &weight);	
       printf("\nEnter Your Height(cm): ");
       scanf("%d", &height);
       
       //------------------------------------
       
       if(gender == 1){
      	         bmr = 66+(13.7*weight)+(5*height)-(6.8*age);
       }else{
                 bmr = 665+(9.6*weight)+(1.8*height)-(4.7*age);
       }
       printf("BMR is : %.2f",bmr);
        
        
        
        
       //-------------------------------------
       //-------------------------------------
       
       printf("\n\nTDEE Calculator");
       printf("\nPess 1 = sit and not workout \nPess 2 = workout 1-3 day/week \nPess 3 = workout 3-5 day/week\nPess 4 = workout 6-7 day/week\nPess 5 = workout morning and evening\n : ");
       scanf("%d", &num_tdee);
       
       if(num_tdee==1){
			tdee=bmr*1.2;
       }else if(num_tdee==2){
			tdee=bmr*1.375;
       }else if(num_tdee==3){
			tdee=bmr*1.55;
       }else if(num_tdee==4){
            tdee=bmr*1.725;
       }else{
			tdee=bmr*1.9;
       }
       printf("\nTDEE is : %.2f",tdee);
       
       //-----------------------------------
       printf("\t\n\nCalories Diary");
       printf("\n\nFood list");
       printf("\nPess 1 = Congee with Pork \nPess 2 = Corn soup \nPess 3 = Crispy egg noodles with Chinese broccoli\nPess 4 = Fried Rice Sticks with Shrimp\nPess 5 = Red pork with rice\nPess 6 = Fried rice with Sausage \nPess 7 = Tuna salad \nPess 8 = Rice with Roast chicken \nPess 9 = Omelet on rice \nPess 10 Instant noodles\n\n  ");
	   //-----------------------------------
	   
	   
	   	printf("\nBreakfast :  ");	
        scanf("%d", &food_choice);
        	
		
		if(food_choice==1){
			cal=160;
			printf("\nFood Quantities : ");
		    scanf("%d", &fq);
			calbf=cal*fq;
            }
        else if(food_choice==2){
			cal=140;
			printf("\nFood Quantities : ");
		    scanf("%d", &fq);
			calbf=cal*fq;
            }
	    else if(food_choice==3){
			cal=515;
            printf("\nFood Quantities : ");
		    scanf("%d", &fq);	
			calbf=cal*fq;
            }
	    else if(food_choice==4){
            cal=486;
            printf("\nFood Quantities : ");
		    scanf("%d", &fq);
            calbf=cal*fq;
            }
	   else if(food_choice==5){
	        cal=541;
	        printf("\nFood Quantities : ");
		    scanf("%d", &fq);
            calbf=cal*fq;
            }
       else if(food_choice==6){
			cal=520;
			printf("\nFood Quantities : ");
		    scanf("%d", &fq);
            calbf=cal*fq;
            }
       else if(food_choice==7){
            cal=122;
            printf("\nFood Quantities : ");
		    scanf("%d", &fq);
			calbf=cal*fq;
            }
       else if(food_choice==8){
			cal=490;
			printf("\nFood Quantities : ");
		    scanf("%d", &fq);
            calbf=cal*fq;
            }
       else if(food_choice==9){
            cal=445;
            printf("\nFood Quantities : ");
		    scanf("%d", &fq);
			calbf=cal*fq;
            }
	   else {
			cal=253;
            printf("\nFood Quantities : ");
		    scanf("%d", &fq);	
			calbf=cal*fq;
		}
		printf("\nCalorie of Breakfast is : %d",calbf);
	   
	   //----------------------------------
	   //----------------------------------
	   //-----------------------------------
	   
	   food_choice = 0;
	   fq = 0;
	   
	   	printf("\nLunch :  ");	
        scanf("%d", &food_choice);
        	
		
		if(food_choice==1){
			cal=160;
			printf("\nFood Quantities : ");
		    scanf("%d", &fq);
			callnch=cal*fq;
            }
        else if(food_choice==2){
			cal=140;
			printf("\nFood Quantities : ");
		    scanf("%d", &fq);
			callnch=cal*fq;
            }
	    else if(food_choice==3){
			cal=515;
            printf("\nFood Quantities : ");
		    scanf("%d", &fq);	
			callnch=cal*fq;
            }
	    else if(food_choice==4){
            cal=486;
            printf("\nFood Quantities : ");
		    scanf("%d", &fq);
            callnch=cal*fq;
            }
	   else if(food_choice==5){
	        cal=541;
	        printf("\nFood Quantities : ");
		    scanf("%d", &fq);
            callnch=cal*fq;
            }
       else if(food_choice==6){
			cal=520;
			printf("\nFood Quantities : ");
		    scanf("%d", &fq);
            callnch=cal*fq;
            }
       else if(food_choice==7){
            cal=122;
            printf("\nFood Quantities : ");
		    scanf("%d", &fq);
			callnch=cal*fq;
            }
       else if(food_choice==8){
			cal=490;
			printf("\nFood Quantities : ");
		    scanf("%d", &fq);
            callnch=cal*fq;
            }
       else if(food_choice==9){
            cal=445;
            printf("\nFood Quantities : ");
		    scanf("%d", &fq);
			callnch=cal*fq;
            }
	   else {
			cal=253;
            printf("\nFood Quantities : ");
		    scanf("%d", &fq);	
			callnch=cal*fq;
		}
		printf("\nCalorie of Lunch is : %d",callnch);
	   
	   //----------------------------------
	   //----------------------------------
	   //-----------------------------------
	   
	   food_choice = 0;
	   fq = 0;
	   
	   	printf("\nDinner :  ");	
        scanf("%d", &food_choice);
        	
		
		if(food_choice==1){
			cal=160;
			printf("\nFood Quantities : ");
		    scanf("%d", &fq);
			caldinn=cal*fq;
            }
        else if(food_choice==2){
			cal=140;
			printf("\nFood Quantities : ");
		    scanf("%d", &fq);
			caldinn=cal*fq;
            }
	    else if(food_choice==3){
			cal=515;
            printf("\nFood Quantities : ");
		    scanf("%d", &fq);	
			caldinn=cal*fq;
            }
	    else if(food_choice==4){
            cal=486;
            printf("\nFood Quantities : ");
		    scanf("%d", &fq);
            caldinn=cal*fq;
            }
	   else if(food_choice==5){
	        cal=541;
	        printf("\nFood Quantities : ");
		    scanf("%d", &fq);
            caldinn=cal*fq;
            }
       else if(food_choice==6){
			cal=520;
			printf("\nFood Quantities : ");
		    scanf("%d", &fq);
            caldinn=cal*fq;
            }
       else if(food_choice==7){
            cal=122;
            printf("\nFood Quantities : ");
		    scanf("%d", &fq);
			caldinn=cal*fq;
            }
       else if(food_choice==8){
			cal=490;
			printf("\nFood Quantities : ");
		    scanf("%d", &fq);
            caldinn=cal*fq;
            }
       else if(food_choice==9){
            cal=445;
            printf("\nFood Quantities : ");
		    scanf("%d", &fq);
			caldinn=cal*fq;
            }
	   else {
			cal=253;
            printf("\nFood Quantities : ");
		    scanf("%d", &fq);	
			caldinn=cal*fq;
		}
		printf("\nCalorie of Lunch is : %d",caldinn);
	   
	   //----------------------------------
	   sum_cal = calbf + callnch + caldinn;
	   
	   printf("\n\nSum of calories per/day is : %d", sum_cal);
	   
	   //----------------------------------
	   
	   if(gender == 1){
                 if(sum_cal > 1800){
                      printf("You got calories not enough per day \n");
                      printf("Please eat more food....");
                      }
                 else if (sum_cal >= 1800 && sum_cal <= 2000){
                      printf("You got calories  enough per day \n");
                      printf("It's Good for healthy..");
                      }
                 else{
                      printf("You got over calories per day \n");
                      printf("Please exercise for good health..");
                      }
       }else{
                if(sum_cal > 1500){
                      printf("You got calories not enough per day \n");
                      printf("Please eat more food....");
                      }
                 else if (sum_cal >= 1500 && sum_cal <= 2500){
                      printf("You got calories  enough per day \n");
                      printf("It's Good for healthy..");
                      }
                 else{
                      printf("You got over calories per day \n");
                      printf("Please exercise for good health..");
             
             }
	   
       
       
       
       
       
       
       
       
       
       
       
       
       // Coded by Anuwat 
       //--------------------------------------
       getch();
       
       }
