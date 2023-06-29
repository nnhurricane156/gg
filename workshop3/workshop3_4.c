#include<stdio.h>
double factorial(int n){
    if(n==1) return 1;
    return n * factorial(n-1);
}
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    double kq= factorial(n);
    printf("Giai thua cua %d la: %.0lf",n,kq);
    return 0;
}