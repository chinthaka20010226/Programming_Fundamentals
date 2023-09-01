#include <stdio.h>

/*int max(int x,int y);
int main() {
    int a;
    a = max(2,6);
    printf("%d", a);
}
int max(int x,int y) {
    if(x < y)
        return y;
    else
        return x;
}*/

/*int sum(int x,int y,int z);
int main() {
    int summation;
    summation = sum(2,4,6);
    printf("%d", summation);
}
int sum(int x,int y,int z) {
    int sum = x + y + z;
    return sum;
}*/

// Call by value.
/*int change(int x);
int main() {
    int a = 5;
    change (a);
    printf("Value after function call is %d\n", a);
}
int change(int x) {
    printf("value inside the function before change is %d\n", x);
    x = x + 10;
    printf("value inside the function after change is %d\n", x);
}*/

//Call by referance.
int change(int *x);
int main() {
    int a = 5;
    change(&a);
    printf("value after function call is %d\n", a);
}
int change(int *x) {
    printf("value inside the function before change is %d\n", *x);
    *x = *x + 10;
    printf("value inside the function before change is %d\n", *x);
}