#include <stdio.h>
int main() {
    int a; // 'a' means integer value.
    printf("Enter the value of 'a':");
    scanf("%d", &a);
    if (a > 60) // if-else-ladder statement.
        printf("I like Ice Cream");
    else if (a > 30)
        printf("I like Chocolate");
    else if (a > 20)
        printf("I like Apple");
    else
        printf("I don't like anything");
}
