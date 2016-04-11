#include <stdio.h>
#include <conio.h>


main(){
	
	int year,number,loan,loan_money=0,money=0,interest=0,pay=0;;
	float rate=0;
	char name[30];
	int n = 1, i = 1;
	
	 	printf("\n Enter Your Name : ");
	 	scanf("%s", &name);
	 	 
		printf("\n Enter Loan_Money : ");
		scanf("%d", &loan);
		
		printf("\n Enter Year : ");
		scanf("%d", &year);
		
		printf("No.\tYear\tRate\tMoney\tInerest\tPay\tLoan_Money\n");
		

	while(i<=15){
		
		if(i==1)
		{
			year = year +2;
			rate = 1.50;
			money = loan * rate /100;
			interest = money * 0/100;
			pay = money + interest;
			loan_money = loan - money;
			printf("%d\t%d\t%.2f\t%d\t%d\t%d\t%d\n",i,year,rate,money,interest,pay,loan_money);
			}
		else if(i==2)
		{
			year = year +1;
			rate = 2.50;
			money = loan * rate /100;
			interest = loan_money * 1/100;
			pay = money + interest;
			loan_money = loan_money - money;
			printf("%d\t%d\t%.2f\t%d\t%d\t%d\t%d\n",i,year,rate,money,interest,pay,loan_money);
			}
		else if(i==3)
		{	
			year = year +1;
			rate = 3.00;
			money = loan * rate /100;
			interest = loan_money * 1/100;
			pay = money + interest;
			loan_money = loan_money - money;
			printf("%d\t%d\t%.2f\t%d\t%d\t%d\t%d\n",i,year,rate,money,interest,pay,loan_money);
			}
		else if(i==4)
		{
			year = year +1;
			rate = 3.50;
			money = loan * rate /100;
			interest = loan_money * 1/100;
			pay = money + interest;
			loan_money = loan_money - money;
			printf("%d\t%d\t%.2f\t%d\t%d\t%d\t%d\n",i,year,rate,money,interest,pay,loan_money);
			}
		else if(i==5)
		{
			year = year +1;
			rate = 4.00;
			money = loan * rate /100;
			interest = loan_money * 1/100;
			pay = money + interest;
			loan_money = loan_money - money;
			printf("%d\t%d\t%.2f\t%d\t%d\t%d\t%d\n",i,year,rate,money,interest,pay,loan_money);
			}
		else if(i==6)
		{
			year = year +1;
			rate = 4.50;
			money = loan * rate /100;
			interest = loan_money * 1/100;
			pay = money + interest;
			loan_money = loan_money - money;
			printf("%d\t%d\t%.2f\t%d\t%d\t%d\t%d\n",i,year,rate,money,interest,pay,loan_money);
			}
		else if(i==7)
		{
			year = year +1;
			rate = 5.00;
		    money = loan * rate /100;
			interest = loan_money * 1/100;
			pay = money + interest;
			loan_money = loan_money - money;
			printf("%d\t%d\t%.2f\t%d\t%d\t%d\t%d\n",i,year,rate,money,interest,pay,loan_money);
			}
		else if(i==8)
		{
		year = year +1;
			rate = 6.00;
		money = loan * rate /100;
			interest = loan_money * 1/100;
			pay = money + interest;
			loan_money = loan_money - money;
			printf("%d\t%d\t%.2f\t%d\t%d\t%d\t%d\n",i,year,rate,money,interest,pay,loan_money);
			}
		else if(i==9)
		{
			year = year +1;
			rate = 7.00;
			money = loan * rate /100;
			interest = loan_money * 1/100;
			pay = money + interest;
			loan_money = loan_money - money;
			printf("%d\t%d\t%.2f\t%d\t%d\t%d\t%d\n",i,year,rate,money,interest,pay,loan_money);
			}
		else if(i==10)
		{
		year = year +1;
			rate = 8.00;
		money = loan * rate /100;
			interest = loan_money * 1/100;
			pay = money + interest;
			loan_money = loan_money - money;
			printf("%d\t%d\t%.2f\t%d\t%d\t%d\t%d\n",i,year,rate,money,interest,pay,loan_money);
			}
		else if(i==11)
		{
			year = year +1;
			rate = 9.00;
		    money = loan * rate /100;
			interest = loan_money * 1/100;
			pay = money + interest;
			loan_money = loan_money - money;
			printf("%d\t%d\t%.2f\t%d\t%d\t%d\t%d\n",i,year,rate,money,interest,pay,loan_money);
			}
		else if(i==12)
		{
			year = year +1;
			rate = 10.00;
		    money = loan * rate /100;
			interest = loan_money * 1/100;
			pay = money + interest;
			loan_money = loan_money - money;
			printf("%d\t%d\t%.2f\t%d\t%d\t%d\t%d\n",i,year,rate,money,interest,pay,loan_money);
			}
		else if(i==13)
		{
			year = year +1;
			rate = 11.00;
		money = loan * rate /100;
			interest = loan_money * 1/100;
			pay = money + interest;
			loan_money = loan_money - money;
			printf("%d\t%d\t%.2f\t%d\t%d\t%d\t%d\n",i,year,rate,money,interest,pay,loan_money);
			}
		else if(i==14)
		{
			year = year +1;
			rate = 12.00;
		money = loan * rate /100;
			interest = loan_money * 1/100;
			pay = money + interest;
			loan_money = loan_money - money;
			printf("%d\t%d\t%.2f\t%d\t%d\t%d\t%d\n",i,year,rate,money,interest,pay,loan_money);
			}
		else
		{
			year = year +1;
			rate = 13.00;
		money = loan * rate /100;
			interest = loan_money * 1/100;
			pay = money + interest;
			loan_money = loan_money - money;
			printf("%d\t%d\t%.2f\t%d\t%d\t%d\t%d\n",i,year,rate,money,interest,pay,loan_money);
			}
			i++;
		
	/*printf(" %d",i);
	scanf("%d",&number);
	
	printf(" %d",i);
	scanf("%d",&year);
	
	printf(" %.2f",i);
	scanf("%.2f",&rate);*/
			
	}
getch();
	}		
	
