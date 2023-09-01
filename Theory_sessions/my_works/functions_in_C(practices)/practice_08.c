#include <stdio.h>

float agg_marks(float m1,float m2,float m3,float m4,float m5);
float per_marks(float m1,float m2,float m3,float m4,float m5);

int main() {
    float s1_m,s2_m,s3_m,s4_m,s5_m,aggregate_marks,percentage_marks;
    printf("Input your five subjects marks:");
    scanf("%f%f%f%f%f", &s1_m,&s2_m,&s3_m,&s4_m,&s5_m);

    aggregate_marks = agg_marks(s1_m,s2_m,s3_m,s4_m,s5_m);
    percentage_marks = per_marks(s1_m,s2_m,s3_m,s4_m,s5_m);
    printf("you have %.2f aggregate marks and %.2f percentage marks.", aggregate_marks,percentage_marks);
}
float agg_marks(float m1,float m2,float m3,float m4,float m5) {
    float agg_marks = m1 + m2 + m3 + m4 + m5;
    return agg_marks;
}
float per_marks(float m1,float m2,float m3,float m4,float m5) {
    float per_marks = (m1 + m2 + m3 + m4 + m5)/5;
    return per_marks;
}