#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character:\n");
    scanf("%c", &ch);
    if ((ch > 'a' && ch < 'z') || (ch > 'A' && ch < 'Z')) { // ASCII value (a=97),(z=122),(A=65),(Z=90).
        printf("character is an alphabet");
    } else
        printf("character is not an alphabet");
    return 0;
}
