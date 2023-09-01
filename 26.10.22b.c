/*#include <stdio.h>

double findAvg(int arr[],int size);

int main() {
    int x[5] = {7,5,3,2,3,};
    double ans = findAvg(x,5);
    printf("%.2lf", ans);
}
double findAvg(int arr[],int size) {
    double avg = 0,sum = 0;
    for(int i = 0;i < size;i++) {
        sum = sum + arr[i];
    }
    avg = sum / size;
    return avg;
}*/

#include <stdio.h>

void fibo(int term);
int main() {
    int n;
    printf("fibonachi series up to term:\n");
    scanf("%d", &n);
    fibo(n);

    return 0;
}
void fibo(int term) {
    if (term == 0) {
        printf("0");
    }else if(term == 1) {
        printf("0 1");
    }else {
        printf("0 1");
        int f,a = 0,b = 1;
        for(int i = 0;i <= term;i++) {
            f = a + b;
            printf("%d", f);
            a = b;
            b = f;
        }
    }
}