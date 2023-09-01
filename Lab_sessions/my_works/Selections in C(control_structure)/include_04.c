#include <stdio.h>

int main() {
    int side1;
    printf("Inter the side1 value:\n");
    scanf("%d", &side1);
    int side2;
    printf("Input the side2 value:\n");
    scanf("%d", &side2);
    int side3;
    printf("Input the side3 value:\n");
    scanf("%d", &side3);

    if (side1 == side2 && side1 == side3 && side2 && side3)
        printf("Equilateral triangle");
    else if (side1 == side2 || side1 == side3 || side2 == side3)
        printf("Isosceles triangle");
    else
        printf("Scalene triangle");
}
