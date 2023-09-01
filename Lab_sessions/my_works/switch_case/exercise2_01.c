#include <stdio.h>

int main() {
    int a;
    printf("Enter value:\n");
    scanf("%d", &a);

    /*if (a == 20)
        printf("I like Ice Cream");
    else if (a == 30)
        printf("I like Chocolate");
    else if (a == 60)
        printf("I like Apple");
    else
        printf("I do not like anything");*/

    switch (a) {
        case 20:
            printf("I like Ice Cream.");
            break;
        case 30:
            printf("I like Chocolate.");
            break;
        case 60:
            printf("I like Apple.");
            break;
        default:
            printf("I do not like anything.");
            break;
    }
    return 0;
}
