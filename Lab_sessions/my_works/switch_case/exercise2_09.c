#include <stdio.h>

int main() {
    int input; // declare a integer value.
    printf("Enter telephone code.\n");
    scanf("%d", &input);

    switch (input) {
        case 11:
            printf("Area name is Delhi.");
            break;
        case 22:
            printf("Area name is Mumbai.");
            break;
        case 33:
            printf("Area name is Kolkata.");
            break;
        case 40:
            printf("Area name is Chennai.");
            break;
        default:
            printf("Area code is not recognized.");
    }
    return 0;
}
