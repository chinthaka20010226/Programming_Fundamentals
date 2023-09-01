#include <stdio.h>
#include <math.h>
int main() {
int rows,k,p; // this statement,we want to print number of rows.
printf("Enter the 'rows' numbers:\n");
scanf("%d", &rows);
for(int i = 1;i <= rows;i++) {
for(int space = rows - i;space > 0;space--) {
printf(" ");
}
for(int j = 0;j < i;j++) {
k = pow(2,j); // this operetoer 2 of 'n' power.printf("% d", k);
}
p = k/2;
for(int j = 1;j < i;j++) {
printf("% d", p);
p = p/2;
}
printf("\n");
}
}