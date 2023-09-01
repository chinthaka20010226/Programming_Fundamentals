#include <stdio.h>

int main() {
    int sum; // sum means summation.
    for(int i = 2;i <= 30;i = i + 2) {
        sum = sum + i;
    }
    printf("%d", sum);
}
