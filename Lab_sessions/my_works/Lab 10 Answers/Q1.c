#include <stdio.h>
#define pi 3.1415
#define area(r) (printf("Area: %.2f",r*r*pi))

int main() {
    int r;
    printf("Enter radius:\n");
    scanf("%d", &r);

    area(r);
    return 0;
}
