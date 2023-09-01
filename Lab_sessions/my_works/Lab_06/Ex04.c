#include <stdio.h>

int main() {
    int i = 1,product = 1; // initialization.
    while(i < 30) { // condition.
        product = product * i;
        i += 2; // modify value.
    }
    printf("%d", product);
    return 0;
}