#include <stdio.h>
#include <math.h>
float main(){
    float x1, x2, y1, y2, dist;
    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%f %f", &x2, &y2);
    dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("\n Distance between the two points: %.2f", dist);
}