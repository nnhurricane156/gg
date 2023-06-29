#include <stdio.h>

void tachTP(float *tp);
int main() {
    int so;
    float tp, kq;
    printf("Nhap n: ");
    scanf("%d", &so);
    printf("Nhap phan thap phan: ");
    scanf("%f", &tp);
    tachTP(&tp);
    printf("Ket qua la: ");
    if (so >= 0)
        kq = so + tp;
    else
        kq = so - tp;
    printf("%.4f", kq);
    return 0;
}
void tachTP(float *tp) {
    while (*tp >= 1) {
        *tp = *tp / 10;
    }
}