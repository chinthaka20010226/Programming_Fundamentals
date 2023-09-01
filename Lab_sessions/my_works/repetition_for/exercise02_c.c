#include <stdio.h>

int main() {
    int count = 0; // count means calculation.
    for(int i = 1;i <= 50;i++) {
        if(i % 2 == 0) {
            count++;
        }
    }
    printf("Even number count = %d\n", count);
}