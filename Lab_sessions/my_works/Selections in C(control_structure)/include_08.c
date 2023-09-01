#include <stdio.h>
int main() {
    int mark; // Your subjects mark.
    printf("Enter your mark:\n");
    scanf("%d", &mark);
    if (mark >= 80) // You know 100 >= mark >= 0.
        printf("Your grade is 'A'");
    else if (mark >= 60)
        printf("Your grade is 'B'");
    else if (mark >= 40)
        printf("Your grade is 'C'");
    else
        printf("Your grade is 'D'");
}
