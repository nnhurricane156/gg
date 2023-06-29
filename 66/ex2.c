#include<stdio.h>
int main(){
    int n,i;
    do{
    printf("Nhap n tu 1 den 9: ");
    scanf("%d",&n);}
    while(n<1||n>9);
    printf("Ket qua la: ");
    for( i=1;i<=n;i++)
        printf("%d",i);
    for(i=n-1;i>0;i--)
        printf("%d",i);
    return 0;
}