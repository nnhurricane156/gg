#include<stdio.h>
int sumDigits(int so){
    int sum =0;
    do{
        int du = so%10;
        so=so/10;
        sum+=du;
    }
    while(so!=0);
    return sum;
}
int main(){
    int so;
    do{
        printf("Nhap vao so: ");
        scanf("%d",&so);
        if(so>=0){
            printf("Tong cua cac so la:%d ",sumDigits(so));
        }
    }
    while(so<0);
    printf("Ket thuc chuong trinh");
    return 0;
}