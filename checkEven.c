#include <stdio.h>
int main(){
    int a;
    do{
        printf("Enter an even number:");
        scanf("%d", &a);
        if(a % 2 != 0){
            printf("The number you entered was not an even number. \n");
        }
    }while(a % 2 != 0);
    
    printf("The number you entered was an even number.");
return 0;
}