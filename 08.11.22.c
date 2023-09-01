/*#include <stdio.h>
//#define isOddorEven(x) x % 2 == 0 ? "Even" : "Odd"
//#define isdivideten(x) x % 10 == 0 ? "True" : "False"
#define is_digit(x) x >= '0' && x <= '9' ? "True" : "False"
#define af(x) (x >= 'a' && x <= 'f' || x >= 'A' && x <= 'F') ? "True" : "False"
#define is_hex(x) (is_digit(x) == "True" || af(x) == "True") ? "True" : "False"
int main(){
    int c;
    //int no;
    printf("Enter a number:");
    //scanf("%d", &no);
    //printf("The number is:%s\n", isOddorEven(no));
    //printf("The number divisible by ten:%s\n", isdivideten(no));
    scanf("%s", &c);
    //scanf("%s", &no);
    printf("Is the character a digit? : %s\n", is_digit(c));
    af(c);
    printf("Is the character a hex_digit? : %s\n",is_hex(c));
}*/

/*#include <stdio.h>
void main(){
    int no,rem,sum = 0;
    printf("Input a number:");
    scanf("%d", &no);
    while(1) {
        rem = no % 10;
        sum = sum + rem;
        no = no / 10;
        if(no == 0){
            if(sum > 9){
                no = sum;
                sum = 0;
                continue;
            }
            else{
                break;
            }
        }
    }
    printf("fortunate number = %d", sum);
}*/

/*#include <stdio.h>

int main(){
    //part 01
    for(int i = 0;i < 4;i++){
        for(int space = 0;space < 6 - i;space++){
            printf(" ");
        }
        for(int j = 0;j < 2*i + 1;j++){
            printf("*");
        }
        printf("\n");
    }
    //part 02
    for(int i = 0;i < 7;i++){
        for(int space = 0;space < 6 - i;space++){
            printf(" ");
        }
        for(int j = 0;j < 2*i + 1;j++){
            printf("*");
        }
        printf("\n");
    }
    //part 03
    for(int i = 0;i < 4;i++){
        for(int space = 0;space < 3;space++){
            printf(" ");
        }
        for(int j = 0;j < 7;j++){
            printf("*");
        }
        printf("\n");
    }
}*/

#include <stdio.h>
void displayArray(int arr[][4],int row,int col);
void main(){
    int arr[3][4];
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 4;j++){
            printf("Enter array[%d][%d] value :", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Before Rotating\n");
    displayArray(arr,3,4);
}
void displayArray(int arr[][4],int row,int col){
    for(int i = 0;i < row;i++){
        for(int j = 0;j < col;j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    int backup[col];
    for(int i = 0;i < col;i++){
        backup[i] = arr[row - 1][i];
    }
    for(int i = 0;i < col;i++){
        arr[row - 1][i] = arr[row - 2][i];
    }
    for(int i = 0;i < col;i++){
        arr[row - 2][i] = arr[row - 3][i];
    }
    for(int i = 0;i < col;i++){
        arr[row - 3][i] = backup[i];
    }
    printf("After the Rotating\n");
    for(int i = 0;i < row;i++){
        for(int j = 0;j < col;j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}


