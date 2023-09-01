#include <stdio.h>

float m_dis(float x);
float f_dis(float x);
float i_dis(float x);
float c_dis(float x);
int main() {
    float dis,dis_m,dis_f,dis_i,dis_c;
    printf("Input the distance between two cities(in km.): ");
    scanf("%f", &dis);

    dis_m = m_dis(dis);
    dis_f = f_dis(dis);
    dis_i = i_dis(dis);
    dis_c = c_dis(dis);
    printf("distance by meters:%.2f m.\n distance by feets:%f\n distance by inches:%f\n distance by centimeters:%.2f cm", dis_m,dis_f,dis_i,dis_c);
}
float m_dis(float x) {
    float m_dis = x * 1000.00;
    return m_dis;
}
float f_dis(float x) {
    float f_dis = x * 1000.00 * 3.28084;
    return f_dis;
}
float i_dis(float x) {
    float i_dis = x * 1000.00 * 3.28084 * 12.00;
    return i_dis;
}
float c_dis(float x) {
    float c_dis = x * 1000.00 * 100.00;
    return c_dis;
}