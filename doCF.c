#include<stdio.h>
int main(){
    float doC,doF;
    printf("Nhap nhiet do (C): ");
    scanf("%f",&doC);
    doF=doC*1.8+32;
    printf("Nhiet do (F) la: %.2f ",doF);
    return 0;
}