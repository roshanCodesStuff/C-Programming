#include <stdio.h>
int main(){
    int a, product = 1;
    printf("Enter the number you want the multiplication table to:");
    scanf("%d", &a);
    printf("The multiplication table is: \n");
    for(int i = 1; i <= 10; i++){
        product = a * i;
        printf("%d * %d = %d \n", a, i, product);
    }
return 0;
}