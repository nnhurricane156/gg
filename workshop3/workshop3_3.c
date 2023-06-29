#include <stdio.h>

int kiemTraDuongTron(int x, int y, int r) {
    int d = x * x + y * y;
    if (d < r * r)
        return -1; 
    else if (d == r * r)
        return 0;
    else
        return 1; 
}

int main() {
    int r, x, y;
    
    printf("Nhap r: ");
    scanf("%d", &r);
    
    printf("Nhap toa do: ");
    scanf("%d%d", &x, &y);
    
    int result = kiemTraDuongTron(x, y, r);
    
    if (result == 1)
        printf("Diem nay nam ngoai duong tron\n");
    else if (result == 0)
        printf("Diem nay nam tren duong tron\n");
    else
        printf("Diem nay nam trong duong tron\n");
    
    return 0;
}