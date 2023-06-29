#include<stdio.h>
int main(){
    double tien,sum;
    int soAo;
    printf("Nhap so ao: ");
    scanf("%d",&soAo);
    printf("Nhap vao so tien cua 1 ao: ");
    scanf("%lf",&tien);
    sum=soAo*tien;
    printf("So tien truoc thue la: %0.2lf\n",sum);
    
    if(sum>100)
    {
        printf("So tien duoc giam gia la: %0.2lf\n",sum/10);
        sum=(sum/90)*100;
        sum=sum+(sum*15)/100;
        printf("So tien kem thue la: %0.2lf\n",sum);
    }
    else
    {
        sum=sum+(sum*15)/100;
        printf("So tien kem thue la: %0.2lf\n",sum);
    }
    return 0;
}