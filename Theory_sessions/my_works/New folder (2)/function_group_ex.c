#include <stdio.h>

int sum(int x,int y);
int sub(int x,int y);
int mul(int x,int y);
int div(int x,int y);
int mod(int x,int y);
int main() {
    int summation = sum(6,3);
    printf("%d\n", summation);

    int subtraction = sub(6,3);
    printf("%d\n", subtraction);

    int multiplication = mul(6,3);
    printf("%d\n", multiplication);

    int division = div(6,3);
    printf("%d\n", division);

    int modulus = mod(6,3);
    printf("%d\n", modulus);
}
int sum(int x,int y) {
    int sum = x + y;
    return sum;
}
int sub(int x,int y) {
    int sub = x - y;
    return sub;
}
int mul(int x,int y) {
    int mul = x * y;
    return mul;
}
int div(int x,int y) {
    int div = x / y;
    return div;
}
int mod(int x,int y) {
    int mod = x % y;
    return mod;
}