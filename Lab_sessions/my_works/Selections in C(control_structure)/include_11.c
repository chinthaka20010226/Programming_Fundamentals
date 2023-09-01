#include <stdio.h>
int main() {
    int speed; // abbreviation for miles per hour.
    printf("Input the speed value:\n");
    scanf("%d", &speed);
    if (speed > 30) {
        printf("You have to pay a base the fine\n");
        if (speed <= 40)
            printf("You must pay 50 pounds.");
        else if (speed <= 50)
            printf("You must pay 75 pounds.");
        else
            printf("You must pay 100 pounds.");
    } else
        printf("You are a good driver,");
}
