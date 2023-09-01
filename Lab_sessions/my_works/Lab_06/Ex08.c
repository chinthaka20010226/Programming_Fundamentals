#include <stdio.h>

int main() {
    float f_number,s_number,Answer;
    char operator,ch;

    do {
        printf("Input the expression : \n");
        scanf("%f%c%f", &f_number,&operator,&s_number);

        switch(operator) {
            case '+':
                Answer = f_number + s_number;
                break;
            case '-':
                Answer = f_number - s_number;
                break;
            case '*':
                Answer = f_number * s_number;
                break;
            case '/':
                Answer = f_number / s_number;
                break;
        }
        printf("Answer = %f\n", Answer);
        printf("Do You Want to Try It Again(y/n)?");
        scanf(" %c", &ch);

    }while(ch == 'y');
    if(ch == 'n')
        printf("Goodbye");
    else
        printf("Invalid character.");
    return 0;
}