#include<stdio.h>
int main(){
    int n,h,m,s;
    printf("Nhap so giay: ");
    scanf("%d",&n);
    s=n%60;
    m=n%3600 /60;
    h=n/3600;

    printf("%02d:%02d:%02d",h,m,s);
}