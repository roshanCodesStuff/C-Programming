#include <stdio.h>
int main(){
    printf("Line 1 \nLine 2 \n");
    printf("Column 1 \tColumn 2 \tColumn 3 \n");
    printf("This is a backslash: \\ \n");
    printf("It\'s a bird! It's a Plane! \n");
    printf("He said, \"Hello World!\" \n");
    printf("Hello\b World \n");
    printf("Original text\rReplaced text \n"); //Output: Replaced text
    printf("original textReplaced text \n"); //Output: Original textReplaced text
    return 0;
}