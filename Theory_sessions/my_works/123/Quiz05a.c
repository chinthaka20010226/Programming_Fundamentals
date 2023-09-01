#include <stdio.h>
int main() {
    float l1,l2,r; // l1 is e length,l2 is a width and r is a radius.
    float A1,A2,P1,P2; // A1,P1 are area and perimeter of rectangle.A2,P2 are area and perimeter of circle.
    printf("Would you like calculate area and perimeter of rectangle and circle,length,width and radius are grater than Zero\n"
           "OR would you like calculate are and perimeter of rectangle,length and width are grater than Zero,radius is Zero\n"
           "OR would you like calculate are and perimeter of circle,length and width both are Zero,radius is grater than Zero:\n");
    scanf("%f,%f,%f", &l1,&l2,&r);

    if ((r > 0) && (l1 > 0) && (l2 > 0)) {
        printf("You are gonna calculate area and perimeter of rectangle and circle:\n");
        A1 = l1 * l2;
        printf("Area of rectangle:%f\n", A1);
        P1 = (l1 + l2) * 2;
        printf("Perimeter of rectangle:%f\n", P1);
        A2 = 3.143 * r * r;
        printf("Area of circle:%f\n", A2);
        P2 = 2 * 3.143 * r;
        printf("Perimeter of circle:%f\n", P2);
    } else if ((r == 0) && (l1 > 0) && (l2 > 0)) {
        printf("You are gonna calculate area and perimeter of rectangle:\n");
        A1 = l1 * l2;
        printf("Area of rectangle:%f\n", A1);
        P1 = (l1 + l2) * 2;
        printf("Perimeter of rectangle:%f\n", P1);
    } else {
        printf("You are gonna calculate area and perimeter of circle:\n");
        A2 = 3.143 * r * r;
        printf("Area of circle:%f\n", A2);
        P2 = 2 * 3.143 * r;
        printf("Perimeter of circle:%f\n", P2);
    }
    return 0;
}