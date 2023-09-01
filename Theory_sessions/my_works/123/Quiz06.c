#include <stdio.h>
int main() {
    int a = 1,l1 = 1189,l2 = 841;
    printf("A0 has dimensions %d mm x %d mm.\n", l1,l2);

    for (a = 1;a <= 8;a++) {
        if (l1 > l2) {
            l1 = l1/2;
            printf("A%d has dimension %d mm x %d mm.\n", a,l1,l2);
        } else {
            l2 = l2/2;
            printf("A%d has dimension %d mm x %d mm.\n", a,l1,l2);
        }
    }
    return 0;
}