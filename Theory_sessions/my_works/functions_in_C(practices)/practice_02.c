#include <stdio.h>

int calculate_A(int x,int y);
int calculate_P(int x,int y);
int main() {
    int calculation,l1,l2;

    printf("Input the length and width:");
    scanf("%d%d", &l1,&l2);

    calculation = calculate_A(l1,l2);
    printf("perimeter of a rectangle:%d\n", calculation);

    calculation = calculate_P(l1,l2);
    printf("area of a rectangle:%d\n", calculation);
}
int calculate_A(int x,int y) {
    int calculate_A = x * y;
    return calculate_A;
}
int calculate_P(int x,int y) {
    int calculate_P = 2 * (x + y);
    return calculate_P;
}