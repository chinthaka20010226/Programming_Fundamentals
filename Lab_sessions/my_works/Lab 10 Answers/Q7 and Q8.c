#include <stdio.h>
#define is_digit(x) x>='0' && x<='9'? "TRUE": "FALSE"
#define is_hex(x) (is_digit(x)=="TRUE" || (x>='A' && x<='F') || (x>='a' && x<='f'))? "TRUE":"FALSE"

int main() {
    int no;
    printf("Enter no: \n");
    scanf("%s",&no);

    printf("is Decimal?: %s\n", is_digit(no));
    printf("is Hexa?: %s",is_hex(no));
    return 0;
}
