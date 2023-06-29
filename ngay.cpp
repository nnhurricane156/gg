#include<stdio.h>
int main(){
    int n,d,m,y;
    printf("Nhap so ngay nao anh ban: ");
    scanf("%d",&n);
    d=n%365%7;
    m=n%365 /7;
    y=n/365;
    printf("%02d nam:%02d tuan:%02d ngay",y,m,d);
}
