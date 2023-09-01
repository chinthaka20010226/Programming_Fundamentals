#include <stdio.h>

int main() {
    int count; // count means calculation.
    for(int i = 1;i <= 50;i++) {
        if(i % 2 != 0) {
            count++;
        }
    }
    printf("Odd number count = %d\n", count);
}
