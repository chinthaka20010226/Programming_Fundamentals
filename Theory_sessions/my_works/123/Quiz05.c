#include <stdio.h>

int main() {
    float l1,l2,r;
    printf("Enter the length,breadth and radius of a rectangle and circle:\n");
    scanf("%f%f%f", l1,l2,r);

    if ((l1 > 0) && (l2 > 0) && (r == 0)) {
        printf("Now, you are gonna calculate the area and perimeter of the rectangle.\n");
        float A;
        A = l1 * l2;
        printf("Area of rectangle:%f\n", A);
        float P = (l1 + l2) * 2;
        printf("Perimeter of rectangle:%f\n", P);
    } else {
        printf("Now, you are gonna calculate the area and perimeter of the circle.\n");
        float A;
        A = 3.143 * r *r;
        printf("Area of circle:%f\n", A);
        float P = 2 * 3.143 * r;
        printf("Perimeter of circle:%f\n", P);
    }
    return 0;
}
