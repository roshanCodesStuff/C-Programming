#include <stdio.h>
int main(){
    int fNum, sNum, proNum;
    printf("Enter the first number:");
    scanf("%d", &fNum);
    printf("Enter the second number:");
    scanf("%d", &sNum);
    proNum = fNum * sNum;
    printf("The product of the two numbers is:  %d", proNum);
    return 0;
}