//program to compute the perimeter and area of circle with given radius
#include <stdio.h>
#include <math.h>

int main(){
    float piee = 3.14;
    float r, Acircle, Pcircle;
    printf("\tName: Roshan Bishwakarma \n \tRoll: 11 \n \n");
    printf("Enter the radius of the circle in cm:");
    scanf("%2f", &r);
    Pcircle = 2 * piee * r;
    Acircle = piee * pow(r, 2);
    printf("The area of the circle with radius '%.2f cm' is '%.2f cm^2' \n", r, Acircle);
    printf("And the perimeter of that circle is '%.2f cm' ", Pcircle);

    return 0;
}