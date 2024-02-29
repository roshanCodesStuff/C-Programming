#include <stdio.h>
int main(){
    int a, sum = 0;
    float avg;
    printf("Enter the total amount of numbers you will be entering:");
    scanf("%d", &a);
    int num[a];
    for(int i = 0; i < a; i++){
        printf("Enter the number one by one:");
        scanf("%d", &num[i]);
    }
    for(int j = 0; j < a; j++){
        sum = sum + num[j];
    }
    avg = sum / a;
    printf("The sum of all the numbers you entered is - '%d' \n", sum);
    printf("Then the average of it is - '%.2f'", avg);

return 0;
}