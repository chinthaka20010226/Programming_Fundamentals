#include <stdio.h>

float average(float x,float y,float z,float p,float q);
int main() {
    float ave;
    ave = average(6,9,4,5,13);
    printf("%.1f", ave);
}
float average(float x,float y,float z,float p,float q) {
    float average = (x+y+z+p+q)/5;
    return average;
}