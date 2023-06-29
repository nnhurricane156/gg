#include<stdio.h>
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    if(n<1||n>9){
        printf("Ban da nhap sai \n");
        goto end;
    }
    int i,j;
    printf("Bang cuu chuong la cua %d la: \n",n);
    for(i=1;i<=10;i++)
        printf("%d x %d = %d\n",n,i,n*i);
    printf("Bang cuu chuong het la\n");
    for(i=1;i<=10;i++){
        for(j=1;j<=10;j++){
            printf("%d x %d = %d\t",i,j,i*j);
        }
        printf("\n");
    }
    end:
    return 0;
}
