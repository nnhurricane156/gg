#include<stdio.h>
long long timViTriFibo(int n);
void nhap(int *n,int *limit);
long long timMaxFibo(int n,int limit);
void xuat(long long kq);
int main(){
    int n,limit;
    nhap(&n,&limit);
    long long kq = timViTriFibo(n);
    long long max = timMaxFibo(n,limit);
    xuat(kq);
    xuat(max);
    return 0;
}
void nhap(int *n,int *limit){
    printf("Nhap n: ");
    scanf("%d",n);
    printf("Nhap limit: ");
    scanf("%d",limit);
}
long long timViTriFibo(int n){
    if(n<=0){
        return 0;
    } else if (n==1){
        return 1;
    } else{
        long long t1=0;
        long long t2=1;
        long long t3;
        int i;
        for(i=3;i<=n;i++){
            t3 = t1+ t2;
            t1=t2;
            t2=t3;
        }
        return t3;
    }

}
long long timMaxFibo(int n,int limit){
    long long t1 = 0;
    long long t2 = 1;
    long long t3 ;
    while (t3 <= limit) {
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
    }
    return t1;
}
void xuat(long long kq){
    printf("Ket qua la: %lld\n",kq);
}