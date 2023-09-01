#include <stdio.h>
#include <math.h>

int main() {
    int n = 12;
    double X[12] = {1,0,3.2,4,1,5,7,0,2,1.1,-1,4.1};
    double Y[12] = {3,5,0,-1,0.5,-1,-2,3,4,1,8.1,2};

    double num,den,den1,den2,X_sum = 0,Y_sum = 0,XY_sum = 0,X_sqsum = 0,Y_sqsum = 0,r,bxy,ybar,xbar;
    for(int i = 0;i < 12;i++) {
        X_sum = X_sum + X[i];
        Y_sum = Y_sum + Y[i];
        XY_sum = XY_sum + X[i] * Y[i];
        X_sqsum = X_sqsum + X[i] * X[i];
        Y_sqsum = Y_sqsum + Y[i] * Y[i];
    }
    num = XY_sum - (X_sum * Y_sum)/n; // this bracket or paranthesis is optional.
    den1 = X_sqsum - (X_sum * X_sum) / n;
    den2 = Y_sqsum - (Y_sum * Y_sum) / n;
    den = sqrt(den1) * sqrt(den2);
    r = num / den;
    printf("r = %lf\n", r);
    bxy = num / den1;
    ybar = Y_sum / 12;
    xbar = X_sum / 12;
    printf("Y - %.2lf = %.3lf(X - %.2lf)", ybar,bxy,xbar);

    return 0;
}