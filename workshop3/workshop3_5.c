#include<stdio.h>

int fibo(int n) {
    int i, t1 = 0, t2 = 1, gg;
    if (n == 0)
        return t1;
    else if (n == 1)
        return t2;
    else {
        for (i = 2; i <= n; i++) {
            gg = t1 + t2;
            t1 = t2;
            t2 = gg;
        }
        return gg;
    }
}
int main() {
    int position;
    printf("Nhap vi tri: ");
    scanf("%d", &position);
    int kq = fibo(position);
    printf("Ket qua o vi tri %d la: %d", position, kq);
    return 0;
}