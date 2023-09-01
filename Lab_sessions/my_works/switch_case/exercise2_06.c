#include <stdio.h>

int main() {
    /*int mark;
    printf("Enter your mark:\n");
    scanf("%d", &mark);

    if ((mark >= 0) && (mark <= 100)) {
        printf("You have a grade.\n");
        if (mark > 75) {
            printf("Your grade is 'A'.\n You are Excellent.");
        } else if (mark > 65) {
            printf("Your grade is 'B'.\n You are Well done.");
        } else if (mark > 50) {
            printf("Your grade is 'C'.\n You are Well done.");
        } else if (mark > 35) {
            printf("Your grade is 'D'\n You Pass.");
        } else
            printf("Your grade is 'F'.\n Better Try Again");
    } else {
        printf("Invalid mark. \n Sorry, you have not a grade.");
    }*/

    char input; // input grade character.
    printf("Input your grade:\n");
    scanf("%c", &input);

    if ((input >= 'A') && (input <= 'F')) {
        switch (input) {
            case 'A':
                printf("You are Excellent.");
                break;
            case 'B':
                printf("You are Well done.");
                break;
            case 'C':
                printf("You are Well done.");
                break;
            case 'D':
                printf("You Pass.");
                break;
            case 'F':
                printf("You are Better Try Again.");
                break;
            default:
                printf("Invalid Grade.");
        }
    } else
        printf("Not valid.");

    return 0;
}
