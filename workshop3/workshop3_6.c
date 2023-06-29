#include<stdio.h>
int kiemTraFibo(int so){
    int t1=0,t2=1,f=1;
    if(so==1) return 1;
    if(so == 0) return 1;
    while(f<so){
        f= t1+t2;
        t1=t2;
        t2=f;
    }
    return so==f;
}
int main(){
    int so;
    printf("Nhap so: ");
    scanf("%d",&so);
    int kq =kiemTraFibo(so);
    if((kiemTraFibo(so)))
        printf("So nay nam trong day fibo");
    else
        printf("So nay khong nam trong day fibo");
    return 0;
}