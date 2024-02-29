#include <stdio.h>
int main(){
    int a, count = 0;
    printf("Enter a number:");
    scanf("%d", &a);
    int num = a;
    while(a != 0){
        count++;
        a = a / 10;
    }
    printf("The number '%d' has %d digits.", num, count);
return 0;
}