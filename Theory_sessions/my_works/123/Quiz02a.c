#include <stdio.h>
int main() {
    float dis; // this a distance between two cities,
    float M; // distance by meter.
    float F; // distance by feet.
    float I; // distance by inches.
    float C; // distance by centimeter.
    printf("Input the distance by kilometer between two cities(Km) :\n");
    scanf("%f", &dis);

    M = dis * 1000; // calculate the distance by meters.
    printf("Between two cities distance by meters(m) :%f\n", M);

    F = M * 3.28084; // calculate the distance by feeds.
    printf("Between two cities distance by feeds :%f\n", F);

    I = F * 12; // calculate the distance by inches.
    printf("Between two cities distance by inches:%f\n", I);

    C = M * 100; // calculate the distance by centimeters.
    printf("Between two cities distance by centimeter(cm):%f", C);
    return 0;
}
