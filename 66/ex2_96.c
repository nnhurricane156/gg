#include <stdio.h>

void sumOfDigits(int n, int *sum) {
    int i;
    *sum = 0;
    while (n != 0) {
        i = n % 10;
        n = n / 10;
        *sum += i;
    }
}

int main() {
    int n, sum;
    printf("Nhap n: ");
    hehe:
    scanf("%d", &n);
    if (n < 0) {
        printf("Nhap lai\n");
        goto hehe;
    }
    sumOfDigits(n, &sum);
    printf("Tong cac chu so cua n la: %d\n", sum);
    return 0;
}
