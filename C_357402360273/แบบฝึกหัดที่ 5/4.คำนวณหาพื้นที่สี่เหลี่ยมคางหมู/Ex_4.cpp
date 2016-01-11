//code by Anuwat Khongchuai ^_^ 
// AKA >> Elaeis guineensis Jacq. (Palm)
// find TRAPEZIUM area with C Programming. 
#include <stdio.h>
#include <conio.h>
main(){
       
    float height, sideA, sideB, sumside, area;
    const float value = 0.5;
    //
    
    printf("Please input your height : >> ");
    scanf("%f", &height);
    //
    printf("Please input your side A : >> ");
    scanf("%f", &sideA);
    //
    printf("Please input your side B : >> ");
    scanf("%f", &sideB);
    //
    sumside = sideA + sideB;
    area = value * height * sumside;
    
    printf("Your area is : %.2f\n\n", area);
    //
    printf("Press any key to exit");
    getch();
       
       
       
       }
