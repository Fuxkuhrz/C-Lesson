#include<stdio.h>
#include<conio.h>
main()
{
int month,number,over,add,getmoney;
float sum,tex,sumtex,change;
printf("Input Month:");
scanf("%d",&month);
printf("Input Number");
scanf("%d",&number);
if(number>300)
{
over=number-300;
printf("over: %d",over);
add=over*2;
printf("\n add: %d",add);
sum=month+add;
printf("\n sum: %.2f",sum);
tex=sum*7/100;
printf("\ntex: %.2f",tex);
sumtex=sum+tex;
printf("\nsumtex: %.2f",sumtex);
printf("\ngetmoney:");
scanf("%d",&getmoney);
change=(getmoney-sumtex);
printf("\nchange: %.2f",change);
}
else 
{
     
printf("over:0 %d",over);
printf("add:0 %d",add);
printf("\n add: %d",add);
sum=month+add;
printf("\n sum: %.2f",sum);
tex=sum*7/100;
printf("\ntex: %.2f",tex);
sumtex=sum+tex;
printf("\nsumtex: %.2f",sumtex);
printf("\ngetmoney:");
scanf("%d",&getmoney);
change=(getmoney-sumtex);
printf("\nchange: %.2f",change);
}
getch();
}
