#include <stdio.h>
int main() {
    int pAmount; // after add discount, you have to payment amount.
    int dis; // dis means, you have discount.
    int pch; // pch means your purchase.

    char input;
    printf("Enter your membership:\n");
    scanf("%c", &input);

    printf("Enter your pch:\n");
    scanf("%d", &pch);

    switch (input) {
        case 'm': // 'm' means membership.
            printf("Yes, you are our member\n");
            if (pch > 5000) {
                dis = pch * 0.15; // 0.15 = 15/100.
                printf("Your discount is%d:\n", dis);
            } else {
                dis = pch * 0.10; // 0.10 = 10/100.
                printf("Your discount is:%d\n", dis);
            }
            break;
        default: // 'Nm' means membership.
            if (pch > 5000) {
                printf("Sorry, you are not our member\n");
                dis = pch * 0.07; // 0.70 = 70/100.
                printf("Your discount is:%d\n", dis);
            } else {
                printf("Sorry, you are not our member\n");
                dis = pch * 0;
                printf("Your discount is:%d\n");
            }
            break;

    }

    pAmount = pch - dis; // pay amount = purchase - discount.
    printf("You have to payment %d:\n", pAmount);

    return 0;
}