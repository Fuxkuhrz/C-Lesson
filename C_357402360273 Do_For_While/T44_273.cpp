#include <stdio.h>
#include <conio.h>


main(){
		
		char name[30];
		float income = 0, sum_income = 0, average;
		int i = 1;
		
		printf("\n\t\t    Name : Anuwat  No : 273 Group : IT411\n\n");
		
		while(i<=3){
		
		printf("\t\t\t*************************\n");
		printf("\t\t\t  Number : %d\n", i);
		printf("\t\t\t  Enter your Name : ");
		scanf("%s", name);
		printf("\t\t\t  Enter your Income : ");
		scanf("%f", &income);
		printf("\t\t\t*************************\n\n");
		
		sum_income = sum_income + income;
	
		i = i + 1;



		}


		average = sum_income/3;
		
		printf("\t\t\t  [+] Sum_Income : %.2f\n", sum_income);
		printf("\t\t\t  [+] Average : %.2f\n", average);










getch();


}
