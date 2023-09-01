#include <stdio.h>
#include "math.h"

float corrCoefficient(float xVals[], float yVals[], int n){
    float Ex=0, Ey=0, Exy=0, Ex2=0, Ey2=0, r;

    for (int i = 0; i < n; ++i) {
        Ex+=xVals[i];
        Ey+=yVals[i];

        Ex2+=xVals[i]*xVals[i];
        Ey2+=yVals[i]*yVals[i];

        Exy+=xVals[i]*yVals[i];

    }
    float numerator = Exy - (Ex*Ey)/n;
    float part1 = Ex2 - (Ex*Ex)/n;
    float part2 = Ey2 - (Ey*Ey)/n;
    float denominator = sqrt(part1) * sqrt(part2);

    r = numerator/denominator;
    return r;
}

float regrCoefficient(float xVals[], float yVals[], int n){
    float Ex=0, Ey=0, Exy=0, Ex2=0, byx;

    for (int i = 0; i < n; ++i) {
        Ex+=xVals[i];
        Ey+=yVals[i];

        Ex2+=xVals[i]*xVals[i];
        Exy+=xVals[i]*yVals[i];

    }
    float numerator = Exy - (Ex*Ey)/n;
    float denominator = Ex2 - (Ex*Ex)/n;

    byx = numerator/denominator;
    return byx;
}

int main() {
    int n=12;
    float xVals[12]= {1,0,3.2, 4,1,5,7,0,2,1.1,-1,4.1};
    float yVals[12]= {3,5,0,-1,0.5,-1,-2,3,4,1,8.1,2};

    float r = corrCoefficient(xVals, yVals, n);
    printf("r: %.4f\n", r);

    float byx = regrCoefficient(xVals, yVals, n);
    printf("y - ybar = %.4f(x - xbar)", byx);
    return 0;
}