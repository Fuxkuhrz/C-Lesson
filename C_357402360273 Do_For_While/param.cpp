#include <stdio.h>
#include <conio.h>

int f_max(int num1, int num2){
    int result;

    if(num1>num2){
        result = num1;
    }
    else{
        result = num2;
    }

    return result;

}



int main (){
       int a, b, z;

       printf("Input a : ");
       scanf("%d", &a);
       printf("Input b : ");
       scanf("%d", &b);

       z = f_max(a, b);

       printf("Max is : %d ", z);


       getch();

       }
