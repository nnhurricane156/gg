#include<stdio.h>
int main(){
    float ori,dis,tax;
    float mpay;
    printf("Gia tien la: ");
    scanf("%f",&ori);
    printf("Phan tram discount la: ");
    scanf("%f",&dis);
    printf("Gia ban dau cua san pham la: %.0f \n",ori);
    dis=(dis/100)*ori;
    ori=ori-dis;
    mpay = ori + ((ori*15)/100);
    printf("Gia tri cua discount la: %.0f \n",dis);
    printf("So tien phai tra va thue la: %.0f \n" ,mpay);
    return 0;
}