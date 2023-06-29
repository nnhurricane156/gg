#include<stdio.h>
int kiemTraNhuan(int y){
    if(y%4==0 && y%100==0 || y%400==0)
        return 1;
    else
        return 0;
}
int kiemTraNgayThang(int d,int m,int y){
    if(d<1 || d>31 ||m<0 || m>12)
        return 0;
    else{
        int day;
        switch(m){
            case 2: day = kiemTraNhuan(y)? 29:28;
                    break;
            case 4: 
            case 6:
            case 9:
            case 11: day= 31;
                    break;
            default: day=30;
            break;}
        if(d == day)
            return 1;
        else
            return 0;
    }
}
int main(){
    int d,m,y;
    printf("Nhap ngay: ");
    scanf("%d",&d);
    printf("Nhap thang: ");
    scanf("%d",&m);
    printf("Nhap nam: ");
    scanf("%d",&y);
    if(kiemTraNgayThang(d,m,y))
        printf("Ngay thang hop le.");
    else
        printf("Ngay thang k hop le.");
    return 0;
}