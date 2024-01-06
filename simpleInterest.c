#include <stdio.h>
int main(){
    float princi, rate, time, SimInterest;
    printf("Enter the principle:");
    scanf("%f", &princi);
    printf("Enter the time in years:");
    scanf("%f", &time);
    printf("Enter the rate of interest:");
    scanf("%f", &rate);
    SimInterest = (princi * time * rate)/100;
    printf("The simple interest will be:\t%.2f", SimInterest);
    return 0;
}