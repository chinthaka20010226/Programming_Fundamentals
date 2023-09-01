#include <stdio.h>

int main() {
    int i = 2,sum; // initialization.
    while(i <= 50) { // condition.
        sum = sum + i;
        i += 2; // update value.
    }
    printf("%d", sum);
}