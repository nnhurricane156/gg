#include<stdio.h>
int main(){
    int a,b,a1,b1;
    printf("Nhap a: ");
    scanf("%d",&a);
    printf("Nhap b: ");
    scanf("%d",&b);
    if(a==0||b==0){
    	printf("Loi");
    	goto end;
	}
    a1=a;b1=b;
    while(a!=b){
        if(a>b)
            a=a-b;
        else
            b=b-a; 
             }
    printf("Uoc chung lon nhat cua a va b la: %d\n",a);
    printf("Boi chung nho nhat cua a va b la: %d",(a1*b1)/a);
    end:
    return 0;
}
