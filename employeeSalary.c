#include <stdio.h>
int main(){
    int empID;
    float hoursW, hoursR, salary;
    printf("Enter employee ID: ");
    scanf("%d", &empID);
    printf("Enter total worked hours in a month: ");
    scanf("%f", &hoursW);
    printf("Enter amount received per hour: ");
    scanf("%f", &hoursR);
    salary = hoursW * hoursR;
    printf("\n Employee ID: %d", empID);
    printf("\n Salary for the month: Rs %.2f", salary);
    return 0;
}