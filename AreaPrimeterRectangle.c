//program to print the area and perimeter of rectangle with height 7 and width of 5 inches
#include <stdio.h>
int main(){
    printf("\tName: Roshan Bishwakarma \n \tRoll: 11 \n \n");
    // Initializing variable
    int length, breadth, perimeter, area;

    // Declaring values to variable in inch
    length = 7;
    breadth = 5;

    // Calculating the perimeter
    perimeter = 2*(length + breadth);

    // Display perimeter
    printf("Perimeter of rectange is: '%d inch' with length '%d inch' and breadth '%d inch' \n", perimeter, length, breadth);
    
    //Calculating the area of the circle
    area = length * breadth;

    //Display Area
    printf("Area of the rectangle is: '%d inch^2' with length '%d inch' and breadth '%d inch'", area, length, breadth);


    return 0;

}