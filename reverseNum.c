#include <stdio.h>
int main(){
    int a, digit, reversed = 0;
    printf("Enter a multi-digit integer:");
    scanf("%d", &a);
    while (a != 0){
        digit = a % 10;
        reversed = reversed * 10 + digit;
        a = a / 10;         
    }
    printf("The reversed of the integer you entered is - %d", reversed);
return 0;
}