#include <stdio.h>
int main(){
    int distTravelled;
    float usedFuel, avg;
    printf("Enter total distance travelled (in km): ");
    scanf("%d", &distTravelled);
    printf("Enter spent fuel (in liters): ");
    scanf("%f", &usedFuel);
    avg = distTravelled / usedFuel;
    printf("\n Average consumption: %.2f km/l", avg);
    return 0;
}