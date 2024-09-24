#include <stdio.h>
#include <math.h> //include library for pow

int main() {
    //Compound interest calculator
    //variable declaration
    float P;
    float R ;
    float T;
    float CI;
    printf("Let's calculate your compound interest! \n");
    //variable initializatoin
    //input principle
    printf("Enter your principle amount: ");
    scanf("%f", &P);
    //input annual rate
    printf("Enter the annual rate: ");
    scanf("%f", &R);
    //input yaers
    printf("Enter the time in years: ");
    scanf("%f", &T);
    //calculate CI
    CI = P* pow((1+R/100), T);
    //output CI
    printf("Your compound interest is:%.2f", CI);
   
    return 0;
}