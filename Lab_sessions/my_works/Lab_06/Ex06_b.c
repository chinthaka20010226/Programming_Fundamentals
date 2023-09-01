#include <stdio.h>

int main() {
    int i = 1,mul = 1; // initialization.
    while(i <= 10) { // condition.
        mul = mul * i;
        i++; // increment.
    }
    printf("%d", mul);
}