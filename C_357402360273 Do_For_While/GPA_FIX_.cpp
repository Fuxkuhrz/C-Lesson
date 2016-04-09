#include <stdio.h>
#include <conio.h>

main(){
       
       char name[30], subject_name[20];
       float subject_num = 0, grade=0, unit=0, sum=0,;
       float total=0, unit_sum=0, average;
       int n = 1, i = 1;
       
       
  
       
       
       printf("\n Student Name : ");
       scanf("%s", name);
       printf(" Subject Number : ");
       scanf("%f", &subject_num);
       
       printf("---------------------------------\n");
       
       
       while(i<=subject_num){
                             
       grade=0, unit=0, sum=0;
       
       printf(" SubjectNo._%d ", n);
       scanf("%s", name);
       printf(" Input your Grade : ");
       scanf("%f", &grade);
       printf(" Input your Unit :  ");
       scanf("%f", &unit);
       sum = grade * unit;
       printf(" Sum is : %.2f", sum);
       printf("\n---------------------------------\n");
       printf("---------------------------------\n");
       total = total + sum;
       unit_sum = unit_sum + unit;
       
       
       
       
       
       
       n = n + 1;
       i = i + 1;       
       }
       
       
       average = total/unit_sum;
       
       printf(" Total : %.2f ", total);
       printf("Unit_sum : %.2f ", unit_sum);
       printf("Average : %.2f ", average);
       
       
       
       
       
       
       
       
       
       
       
  
       
       
       
       getch();
       }
