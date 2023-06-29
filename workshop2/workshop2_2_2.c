#include<stdio.h>
int main(){
    int a=1,n;
    int sum=0;
    printf("Nhap n: ");
    scanf("%d",&n);
    if(n<10 || n >50){
        printf("Loi ");
        goto end;
    }
    while(a<=n)
    {
        
        if(a%2==0)
            sum+=a;
        a++;
    }
    printf("Tong cac so la: %d",sum);
    end:
    return 0;
}