// Function in C,

/*#include <stdio.h>
void sub() {
    int m,n,sub = 0;
    printf("enter two numbers:\n");
    scanf("%d %d", &m,&n);
    sub = m - n;
    printf("sub = %d\n", sub);
}
void sum() {
    int a, b, sum = 0;
    printf("enter two numbers:\n");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("sum = %d\n", sum);
    sub();// you can use calling any other function in this user define function.
    /*void sub(){

    } // you can't use definition of any other function not allowed.this is illegal.
}

void main() {
    sum();
    printf("Hello..\n");
    sum();
    printf("How are u....\n?");
    sum();
    printf("bye.\n");
}*/

//Function Declaration,
/*#include <stdio.h>
void sum(void); //function declaration OR function prototype,
void main() {
    sum(); //function calling,
}
void sum(void) { //function definition,
    int a,b,sum = 0;
    printf("Enter two number:\n");
    scanf("%d %d", &a,&b);
    sum = a + b;
    printf("sum = %d\n", sum);
}*/

/*#include "stdio.h"
char fun();
void main() {
    //char fun(); //this is okay,But ????
    char ch;
    ch = fun();
    printf("ch = %c", ch);
}
char fun() {
    char ch;
    printf("enter a character:\n");
    scanf("%c", &ch);
    return ch;
}*/

//Call by value & Call by reference,
// 01)Call by value,
/*#include <stdio.h>
void fun(int ,int );
void main() {
    int x = 5,y = 7;
    fun(x,y);
    printf("inside main(calling function)\n");
    printf("x = %d y = %d\n", x,y);
}
void fun(int x,int y) {
    x = 7;
    y = 5;
    printf("inside fun(called function)\n");
    printf("x = %d y = %d\n", x,y);
}*/

// 02)Call by reference,
/*#include <stdio.h>
void fun(int* ,int* );
void main() {
    int x = 5,y = 7;
    fun(&x,&y);
    printf("inside main(calling function)\n");
    printf("x = %d y = %d\n", x,y);
}
void fun(int* x,int* y) {
    *x = 7;
    *y = 5;
    printf("inside fun(called function)\n");
    printf("x = %d y = %d\n", *x,*y);
}*/

//Classification of Functions,
// 01)No Argument without return type.
/*#include <stdio.h>
void sum(void); //No Argument & Without return type.
main() {
    sum(); //No Argument.
    return 0;
}
void sum() {
    int a = 5,b = 7,sum = 0;
    sum = a + b;
    printf("sum = %d\n", sum);
}*/

// 02)No Arguments With return type,
/*#include <stdio.h>
char sum(void);
void main() {
    int s;
    s = sum();
    printf("sum = %c\n", s);
}
char sum() {
    int a,b,sum = 0;
    printf("enter a & b:\n");
    scanf("%d%d", &a,&b);
    sum = a + b;
    //printf("sum = %d\n", sum);
    //return sum;
    //return sum,a,b; //Comma Operator,execute first operand then discard and execute second operand then discard and execute third operand then return it.
    return 'a','0','1';
    printf("hi..");
}*/

// 03)With Argument Without Return Type,
/*#include <stdio.h>
void sum(int ,float );
void main() {
    int a;
    float b;
    printf("Enter a & b:\n");
    scanf("%d%f", &a,&b);
    sum(a,b);
}
void sum(int x,float y) {
    //float sum = 0;
    //sum = x + y;
    printf("sum = %.3f\n", x+y);
}*/

/*#include <stdio.h>
void even_odd(int );
void main() {
    int num;
    printf("Enter number:\n");
    scanf("%d", &num);
    even_odd(num);
}
void even_odd(int x) {
    if(x % 2 == 0) {
        printf("This number is Even.");
    }
    else {
        printf("This number is Odd.");
    }
}*/

// 04)With Arguments & With Return Types,
/*#include "stdio.h"
int max(int ,int );
void main() {
    int m,n,maxi;
    printf("Enter the m & n:\n");
    scanf("%d%d", &m,&n);
    maxi = max(m,n);
    printf("Maximum value is :%d\n", maxi);
}
int max(int x,int y) {
    if(x == y) {
        printf("Same value.\n");
        return x;
    }
    else if(x > y) {
        return x;
    }
    else {
        return y;
    }
}*/

/*#include <stdio.h>
int sum(int ,int );
void main() {
    int m,n,s = 0;
    printf("Input value of m & n:\n");
    scanf("%d%d", &m,&n);
    s = sum(m,n);
    printf("sum = %d\n", s);
}
int sum(int x,int y) {
    return x+y;
}*/

/*#include <stdio.h>
int jumble(int x,int y) {
    x = 2*x + y;
    return x;
}
int main() {
    int  x = 2,y = 5;
    y = jumble(y,x);
    x = jumble(y,x);
    printf("%d\n", x);
    return 0;
}*/

/*#include <stdio.h>
int incr(int i){
    static int count = 0;
    count = count + i;
    return (count);
}
main(){
    int i,j;
    for(i = 0;i <= 4;i++) {
        j = incr(i);
    printf("j = %d\n", j);
    }
}*/

/*#include <stdio.h>
int r(){
    static int num = 7;
    return num--;
}
int main(){
    for(r();r();r())
        printf("%d ", r());
    return 0;
}*/

/*#include <stdio.h>
void f(int* p,int m) {
    m = m + 5;
    *p = *p + m;
    return;
}
void main() {
    int i = 5,j = 10;
    f(&i,j);
    printf("%d ", i+j);
}*/

// Passing Array as an Argument to a Function in C,
/*#include <stdio.h>
int avg(int [],int );
void main() {
    int average,size;
    int marks[5] = {10,20,30,40,50};
    size = sizeof(marks)/sizeof(marks[0]);
    average = avg(marks,size);
    printf("average = %d\n", average);
    printf("inside main function size of array is(in bytes):%d\n", sizeof(marks));
}
int avg(int marks[],int size) {
    int sum = 0,average = 0;
    for(int i = 0;i < size;i++) {
        sum = sum + marks[i];
    }
    average = sum/size;
    printf("inside avg function size of array is(in bytes):%d\n", sizeof(marks));
    return average;
}*/

// Passing String as an Argument to a Functions,
/*#include <stdio.h>
void modify(char* ,char[]);
void main() {
    char* str1[] = "Chinthaka"; //invalid initializer.
    char* str2[] = "Parami";
    modify(str1,str2);
}
void modify(char str1[],char str2[]) {
    int i = 0,length = 0;
    for(i = 0;str1[i] != '\0';i++) {
        length = length + 1;
    }
    printf("length of str1 : %d\n", length);
    str1[0] = 'c';
    str2[0] = 'p';
    printf("both the string are : %s %s", str1,str2);
}*/

// Return a String form a Function in C,
/*#include <stdio.h>
const char* display();
void main() {
    const char* str;
    str = display();
    str[0] = 'z';
    printf("string is:%s", str);
    //str[0] = 'z';
    //printf("string is:%s", str);
}
const char* display() {
    //return "Jenny"; // we can not modify this string,it is read only...
    //char str[] = "Jenny"; // function return address of local variable...print any thing,
    //return str;
    //static char str[] = "Jenny"; // we can modify this string...
    //return str;
    //char* str = "Jenny"; // print Jenny,but can not modify it...
    //return str;
    const char* str = "Jenny"; // assignment of read-only location '*str'...we have to modify definition & declaration.
    return str;
}*/

// Return Pointer from Function,
/*#include "stdio.h"
int *returnpointer(int[],int );
void main() {
    int *p;
    int a[5] = {1,2,3,4,5};
    //a = a + 2; // assignment to expression with array type...
    //printf("%d\n", *a);
    for(int i = 0;i < 5;i++) {
        p = returnpointer(a,i);
        printf("%d\n", *p);
    }
}
int *returnpointer(int a[],int b) {
    a = a + b;
    return a;
}*/

// Solving Problem in Function,
/*#include <stdio.h>
void f(int *p,int *q) {
    p = q;
    *p = 2;
}
int i = 0,j = 1;
int main() {
    f(&i,&j);
    printf("%d %d\n", i,j);
    getchar();
    return 0;
}*/

// Function Pointer in C,
/*#include <stdio.h>
int sum(int ,int );
void main() {
    int s = 0;
    //int (*ptr)(int ,int ) = &sum; // Function pointer contains address of code....
    //s = (*ptr)(2,3);
    int (*ptr)(int ,int ) = sum;
    s = ptr(2,3);
    printf("sum = %d\n", s);
}
int sum(int a,int b) {
    return a+b;
}*/

// Callback Function using Function Pointer in C,
/*#include <stdio.h>
void sum(int a,int b){
    printf("sum = %d\n", a+b);
}
void sub(int a,int b){
    printf("sub = %d\n", a-b);
}
void display(void (*ptr)(int ,int )){
    (*ptr)(5,2);
}
void main() {
    display( sum);
    display( sub);
}*/

// Application of Function Pointer in C,
#include <stdio.h>
void sum(int a,int b){
    printf("summation = %d\n", a+b);
}
void sub(int a,int b){
    printf("subtraction = %d\n", a-b);
}
void mul(int a,int b){
    printf("multiplication = %d\n", a*b);
}
void div(int a,int b){
    printf("division = %d\n", a/b);
}
void main() {
    int ch,a,b;
    void (*ptr[10])(int ,int ) = {sum,sub,mul,div};
    printf("0 for summation.\n1 for subtraction.\n2 for multiplication.\n3 for division.\n");
    printf("Input your choice:\n");
    scanf("%d", &ch);
    printf("Input a & b values:\n");
    scanf("%d %d", &a,&b);
    (*ptr[ch])(a,b);
}

/*#include <stdio.h>
void main() {
    int ch,a,b;
    printf("0 for summation.\n1 for subtraction.\n2 for multiplication.\n3 for division.\n");
    printf("Input your choice:\n");
    scanf("%d", &ch);
    printf("Input a & b values:\n");
    scanf("%d %d", &a,&b);

    switch(ch)
    {
        case 0:printf("summation = %d\n", a+b);break;
        case 1:printf("subtraction = %d\n", a-b);break;
        case 2:printf("multiplication = %d\n", a*b);break;
        case 3:printf("division = %d\n", a/b);break;
        default:printf("enter valid choice.");
    }
}*/

/*#include <stdio.h>
void sum(int a,int b){
    printf("summation = %d\n", a+b);
}
void sub(int a,int b){
    printf("subtraction = %d\n", a-b);
}
void mul(int a,int b){
    printf("multiplication = %d\n", a*b);
}
void div(int a,int b){
    printf("division = %d\n", a/b);
}
int main(){
    int ch,a,b;

    printf("0 for summation.\n1 for subtraction.\n2 for multiplication.\n3 for division.\n");
    printf("Input your choice:\n");
    scanf("%d", &ch);
    printf("Input two numbers:\n");
    scanf("%d%d", &a,&b);

    switch(ch)
    {
        case 0:sum(a,b);break;
        case 1:sub(a,b);break;
        case 2:mul(a,b);break;
        case 3:div(a,b);break;
        default:printf("enter valid choice.");
    }
}*/