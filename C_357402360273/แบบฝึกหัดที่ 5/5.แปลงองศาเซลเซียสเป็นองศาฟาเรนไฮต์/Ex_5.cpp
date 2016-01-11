//code by Anuwat Khongchuai ^_^ 
// AKA >> Elaeis guineensis Jacq. (Palm)
// Celsius to Fahrenheit degrees conversion (°C to °F)
#include <stdio.h>
#include <conio.h>

main(){
       
    float dc, fc;
    const float value1 = 1.8;
    const int value2 = 32;
    //
    
    printf("Please input your Celsius degrees  : >> ");
    scanf("%f", &dc);
    //    
    fc = dc * value1 + value2; 
    //
    printf("Your Fahrenheit degrees is : %.2f\n\n", fc);
    //   
    printf("Press any key to exit");
    getch();
       
       
       
       }
