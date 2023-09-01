#include <stdio.h>

int main() {
    char letter;
    printf("Input the letter:\n");
    scanf("c%", &letter);

    if ((letter >= 'A') && (letter <= 'Z') || (letter >= 'a') && (letter <= 'z')) {
        printf("Yes, it is valid.\n");
        if (letter == 'a','e') {
            printf("This is a vowel.");
        } else
            printf("This is a consonant");
    } else
        printf("Sorry, it is a not valid.");

    /*if ((letter >= 65) && (letter <= 90) || (letter >= 97) && (letter <= 122)) {
        printf("Valid.");
        switch (letter) {
            case 'a':case 'e':case 'i':case 'o':case 'u':
            case 'A':case 'E':case 'I':case 'O':case 'U':
                printf("This is a vowel.");
            default:
                printf("This is a consonant.");
        }
    } else
        printf("Not Valid.");*/
    return 0;
}
