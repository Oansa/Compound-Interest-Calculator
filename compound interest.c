#include <stdio.h>
#include <math.h> //include library for pow

int main() {
    //Compound interest calculator
    //variable declaration
    float P;
    float R ;
    float T;
    float CI;
    int n;
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
    //input n
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", "&n");
    //calculate CI
     CI= P*pow((1+R/(n*100)),n*T);
    //output CI
    printf("Your compound interest is:%.2f", CI);
   
    return 0;
}
