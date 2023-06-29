#include<stdio.h>
int main(){
    int h,i,j;
    printf("Ban hay nhap chieu cao cua kim tu thap: ");
    hehe: 
    scanf("%d",&h);
    if(h<0){
        printf("Nhap lai");
        goto hehe;
    }
    for(i=1;i<=h;i++){
        for(j=i;j>=1;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}