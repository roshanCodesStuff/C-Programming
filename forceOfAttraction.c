#include <stdio.h>
#include <math.h>
int main(){
    float g, m1, m2, r, force;
    printf("Enter mass of object 1 (kg): ");
    scanf("%f", &m1);
    printf("Enter mass of object 2 (kg): ");
    scanf("%f", &m2);
    printf("Enter distance between the objects (m): ");
    scanf("%f", &r);
    g = 6.67 * pow(10, -11);
    force = (g * m1 * m2) / pow(r, 2);
    printf("\nForce of attraction between the objects: %.2f N", force);
    printf("\nwhere, G = '%f'", g);
    return 0;
}