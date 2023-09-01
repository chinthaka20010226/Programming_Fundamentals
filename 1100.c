/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// Student:
//     -name (string)
//     -id (string)
//     -age (int)
//     -geades (int array)

typedef struct{
    char name[50];
    char id[10];
    int age;
    int grades[5];
}student;

typedef struct{
    int x;
    int y;
}point;

typedef struct{
    int *arr;
}Data;

void print_student_info(student );
void print_points(point points[]);
//void print_data(Data x[],Data y[]);

int main(){
    student chinthaka;

    strcpy(chinthaka.name,"Chinthaka");
    strcpy(chinthaka.id,"214189E");

    chinthaka.age = 21;

    chinthaka.grades[0] = 1;
    chinthaka.grades[1] = 2;
    chinthaka.grades[2] = 3;
    chinthaka.grades[3] = 4;
    chinthaka.grades[4] = 5;

    print_student_info(chinthaka);

    for(int i = 0;i < 5;i++){
        printf("Input marks of grade %d:", i+1);
        scanf("%d\n", chinthaka.grades[i]);
    }

    point p1 = {1,2};
    point p2 = {.x = 2,.y = 1};

    printf("p1.x:%d\n", p1.x);
    printf("p1.y:%d\n", p1.y);

    printf("p2.x:%d\n", p2.x);
    printf("p2.y:%d\n", p2.y);

    p1 = p2;

    printf("p1.x:%d\n", p1.x);
    printf("p1.y:%d\n", p1.y);

    point points[10];

    for(int i = 0;i < 10;i++){
        points[i].x = i;
        points[i].y = 10 - i;
    }
    print_points(points);

    Data x;
    Data y;

    x.arr = malloc(sizeof(int) * 5);
    y.arr = malloc(sizeof(int) * 5);

    x.arr[0] = 1;
    x.arr[1] = 2;
    x.arr[2] = 3;
    x.arr[3] = 4;
    x.arr[4] = 5;

    y.arr[0] = 9;
    y.arr[1] = 9;
    y.arr[2] = 9;
    y.arr[3] = 9;
    y.arr[4] = 9;

    //print_data();

    x = y;

    for(int i = 0;i < 5;i++){
        printf("x.arr[%d] = %d\n", i,x.arr[i]);
    }

    x.arr[0] = 11;

    for(int i = 0;i < 5;i++){
        printf("y.arr[%d] = %d\n", i,y.arr[i]);
    }

    return 0;
}
void print_student_info(student student){

    printf("student name:%s", student.name);
    printf("\nstudent id:%s", student.id);
    printf("\nstudent age:%d", student.age);

    for(int i = 0;i < 5;i++){
        printf("marks of grade %d:%d\n", i+1,student.grades[i]);
    }
}
void print_points(point points[]){
    for(int i = 0;i < 10;i++){
        printf("p%d = (%d,%d)\n", i,points[i].x,points[i].y);
    }
}
void print_data(Data x[], Data y[]){
    for(int i = 0;i < 5;i++){
        printf("d%d = (%d,%d)\n", i,x[i].arr,y[i].arr);
    }
}*/

// Dynamic memory allocation,

/*#include<stdio.h>
#include<stdlib.h>

int main(void){
    int *a = malloc(sizeof(int) * 10);

    for(int i = 0;i < 10;i++)
        a[i] = 10 - i;

    for(int i = 0;i < 10;i++){
        printf("a[%d] = %d\n", i,a[i]);

    }
    printf("\n");
    printf("a : %p\n", a);

    free(a);

    //printf("a[0] = %d\n", a[0]); // assing some garbage value,because dynamic memory allocation is free....
    return 0;
}*/

/*#include<stdio.h>
#include<stdlib.h>
//void memory_hog(int size);
int main(void){
    int size = 0;
    printf("Enter size:");
    scanf("%d", &size);

    //int *a = malloc(sizeof(int) * 10);
    int *a = calloc(size, sizeof(int));

    for(int i = 0;i < size;i++)
        a[i] = 10 - i;

    for(int i = 0;i < size;i++)
        printf("a[%d] = %d\n", i,a[i]);
    printf("\n");
    printf("a : %p\n", a);

    a = realloc(a, sizeof(int) * (size + 5));

    for(int i = size;i < (size+5);i++)
        a[i] = 9;
    for(int i = 0;i < (size+5);i++)
        printf("a[%d] = %d\n", i,a[i]);
    printf("\n");

    //int *save = a;
    //free(a);

    //printf("save : %p\n", save);
    //for(int i = 0;i < 10;i++)
    //    printf("save[%d] = %d\n", i, save[i]);
    //printf("\n");

    //while(1) memory_hog(128000); // your programme is crashed,because heap memory allocated more large storage..therefore we are using calloc function...

    return 0;
}
void memory_hog(int size){
    int *a = malloc(size);
}*/

/*#include<stdio.h>
void displayArray(int arr[][3], int row, int col);
void main(){
    int arr[4][3];

    printf("Input the values of Array,\n");
    for(int i = 0;i < 4;i++){
        for(int j = 0;j < 3;j++){
            if(j == 0){
                printf("arr[%d][%d]:", i,j);
                scanf("%d", &arr[i][j]);
            }
            else{
                arr[i][j] = 0;
            }
        }
    }
    displayArray(arr,4,3);

}
void displayArray(int arr[][3], int row, int col){
    int temp[4];

    printf("Before Rotating the Array:\n");
    for(int i = 0;i < row;i++){
        for(int j = 0;j < col;j++){
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }

    for(int i = 0;i < row;i++)
        temp[i] = arr[i][1];
    for(int i = 0;i < row;i++)
        arr[i][1] = arr[i][0];
    for(int i = 0;i < row;i++)
        arr[i][0] = arr[i][2];
    for(int i = 0;i < row;i++)
        arr[i][2] = temp[i];

    printf("After Rotating the Array:\n");
    for(int i = 0;i < row;i++){
        for(int j = 0;j < col;j++){
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
}*/

/*#include<stdio.h>
#define is_digit(x) (('9' >= x) && (x >= '0')) ? "True" : "False"
#define is_hex(x) ((is_digit(x) == "True") || ('A' <= x && x <= 'F') || ('a' <= x && x <= 'f')) ? "True" : "False"
int main(){
    int num;
    printf("Enter a number:");
    scanf("%s", &num);

    printf("Enter number is digit:%s", is_digit(num));
    printf("\nEnter number is hexadecimal:%s", is_hex(num));
    return 0;
}*/

/*#include<stdio.h>
#define is_digit(x) (x >= 0 && x <= 9) ? "True" : "False"
//#define is_digit(x)\
//if((x >= 0) && (x <= 9))\
//   printf("True");\
//else\
//   printf("False");

int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    is_digit(num);
    //printf("Enter number is digit:%s", is_digit(num));
}*/

/*#include<stdio.h>
#define is_digit(x) ((x >= '0') && (x <= '9')) ? "TRUE" : "FALSE"
#define A_to_F(x) (((x >= 'A') && (x <= 'F')) || ((x >= 'a') && (x <= 'f'))) ? "TRUE" : "FALSE"
#define is_hex(x) ((is_digit(x) == "TRUE") || (A_to_F(x) == "TRUE")) ? "TRUE" : "FALSE"
int main(){
    char num;
    printf("Enter a number:");
    scanf("%c", &num);

    if(is_hex(num) =="TRUE"){
        printf("Enter number is a hexadecimal");
    }
    else{
        printf("Enter number is not a hexadecimal.");
    }
    return 0;
}*/

/*#include<stdio.h>

#define PI 3.143
#define Area_of_circle(x) PI * x * x

void main(){
    float r;
    printf("Enter radius of circle:");
    scanf("%f", &r);

    printf("Area of circle is:%.2f", Area_of_circle(r));
}*/

/*#include<stdio.h>
#include<math.h>

int sumOfSquare(int );

int main(){
    int num,sum = 0;
    printf("Input a number:");
    scanf("%d", &num);

    sum = sumOfSquare(num);
    printf("Summation of square root:%d", sum);
}

int sumOfSquare(int num){
    int x,y,sum = 0;
    for(;;){
        x = num / 10;
        y = num % 10;
        sum  = sum + pow(y,2);
        num = x;
        if(x == 0){
            break;
        }
    }
    return sum;
}*/

/*#include<stdio.h>

int facto(int );

int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    //facto(num);
    printf("Factorial of Enter number is:%d", facto(num));
}

int facto(int num){
    int fact = 1;
    if(num == 1){
        return num;
    }
    fact = num * facto(num-1);
    return fact;
}*/

/*#include<stdio.h>
#include<string.h>
void validation(char password[]);

void main(){
    char password[50];
    printf("Enter your password:");
    scanf("%s", password);
    //scanf(" %[^\n]s", password);

    validation(password);
}

void validation(char password[]){
    int len = 0,count1 = 0,count2 = 0;
    len = strlen(password);
    if(len >= 6){
        for(int i = 0;password[i] != '\0';i++){
            if((password[i] >= 'A') && (password[i] <= 'Z')){
                count1++;
            }
            if((password[i] >= '0') && (password[i] <= '9')){
                count2++;
            }
        }
    }
    if((count1 > 1) && (count2 > 1)){
        printf("Your password is valid.");
    }
    else{
        printf("Your password is invalid,Try again.");
    }
}*/

/*#include<stdio.h>
#include<string.h>

void sort(char word[] );

void main(){
    char word[50];
    printf("Enter a word:");
    scanf("%s", word);

    sort(word);
}

void sort(char word[] ){
    char temp;
    int len;
    len = strlen(word);

    for(int j = 0;j < len;j++){
        for(int i = j+1;i < len;i++){
            if(word[i] < word[j]){
                temp = word[j];
                word[j] = word[i];
                word[i] = temp;
            }
        }
    }
    printf("After sorting word:%s", word);
}*/

#include<stdio.h>
#include<string.h>

void convert_to_Cap(char word[] ,int );
void convert_to_Sim(char word[] ,int );

void main(){
    int len = 0;
    char word[50],l;
    printf("Input a word:");
    scanf("%s", word);

    len = strlen(word);

    printf("Would you like???....,\nIf you want Capitalize,you must enter 'C',\nIf you want Simplize,you must enter 'S'.\n");
    scanf(" %c", &l);

    switch(l){
        case 'C':convert_to_Cap(word,len);break;
        case 'S':convert_to_Sim(word,len);break;
    }

}

void convert_to_Cap(char word[] ,int len ){
    for(int i = 0;i <  len;i++){
        word[i] = word[i] - 32;
    }
    printf("After Capitalizing a word is:%s", word);
}

void convert_to_Sim(char word[] ,int len){
    for(int i = 0;i < len;i++){
        word[i] = word[i] + 32;
    }
    printf("After Simpling a word is:%s", word);
}