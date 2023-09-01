#include <stdio.h>

int main() {
    int bonus, cy, jy, sy;
    printf("Enter the current year and joined year:\n");
    scanf("%d %d", &cy,&jy);

    sy = cy - jy;

    if(sy > 3){
        bonus = 2500;
        printf("Congratulation!!..You got the bonus:%d", bonus);
    }
    return 0;
}
