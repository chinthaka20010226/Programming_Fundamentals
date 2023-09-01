#include <stdio.h>

int main() {
    int mark;
    printf("Enter your mark:\n");
    scanf("%d", &mark);
    if ((100 >= mark) && (mark >= 0)) {
        printf("You have a grade.\n");
        if (mark >= 80)
            printf("Your grade is 'A'.");
        else if (mark >= 60)
            printf("Your grade is 'B'.");
        else if (mark >= 40)
            printf("your grade is 'C'.");
        else
            printf("Your grade is 'D'.");
    }
    else
        printf("Sorry,You haven't grade.");
}
