#include <stdio.h>
int main(){
    int a, digit, sum = 0;
    printf("Enter an integer of your choice:");
    scanf("%d", &a);
    int number = a;
    while(a != 0){
        digit = a % 10;
        sum = sum + digit;
        a = a / 10;
    }
    printf("The sum the digits of '%d' is - %d", number, sum);
return 0;
}