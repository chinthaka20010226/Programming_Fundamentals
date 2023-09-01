#include <stdio.h>
int main() {
    float dis; // this a distance between two cities,
    float M; // distance by meter.
    float F; // distance by feet.
    float I; // distance by inches.
    float C; // distance by centimenter.
    printf("Input the distance by kilometer between two cities(Km) :\t\n");
    scanf("%f", &dis);

    M = dis * 1000;
    printf("Between two cities distance by meters(m) :\t%f\n", M);

    F = M * 3.28084;
    printf("Between two cities distance by feeds :\t%f\n", F);

    I = F * 12;
    printf("Between two cities distance by inches:\t%f\n", I);

    C = M * 100;
    printf("Between two cities distance by centimeter(cm):\t%f", C);
    return 0;
}
