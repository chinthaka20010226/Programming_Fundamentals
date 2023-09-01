#include <stdio.h>
int main() {
    float x; // 'x' means starting meter reading.
    printf("Input starting meter reading:\n");
    scanf("%f", &x);
    float y; // 'y' means ending meter reading.
    printf("Input ending meter reading:\n");
    scanf("%f", &y);
    float z;
    z = y - x; // No of units consumed.
    printf("No of units consumed = %f\n", z);
    float R; // We have to pay amount.
    if (z >= 201) {
        R = z * 3.50;
        printf("R = %f", R);
    }
    else if (z >= 101) {
        R = z * 2.50;
        printf("R = %f", R);
    }else {
        R = z * 1.50;
        printf("R = %f", R);
    }
    return 0;
}