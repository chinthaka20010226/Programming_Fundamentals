#include <stdio.h>

int main() {
    int mul = 1; // mul means multiplications.
    for(int i = 1;i <= 15;i++) {
        mul = mul * i;
    }
    printf("%d", mul);
}
