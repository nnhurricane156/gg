#include <stdio.h>
#include <math.h>

int main() {
    double a;
    double n = 1, d = 1;
    double result = 1;
    printf("Nhap a: ");
    scanf("%lf", &a);
    while (fabs(n) > 1e-10) {
        n *= a / d;
        d++;
        result += n;
    }
    printf("Ket qua cua phep tinh e^%.2lf la: %.6lf\n", a, result);
    return 0;
}