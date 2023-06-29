#include <stdio.h>
#include <string.h>
#include <math.h>
int demDigits(char c[]){
    int dem = 0, i;
    int dai = strlen(c);
    printf("Nhap vao chuoi: \n");
    fgets(c, 20, stdin);
    for (i = 0; i < dai; i++){
        if (c[i] >= '0' && c[i] <= '9')
            dem++;
    }
    return dem;
}

void nhap(int *n){
    printf("Nhap vao so: ");
    scanf("%d", n);
}

void tinhToan(int a, int b, char k){
    nhap(&a);
    printf("Nhap vao toan tu:\n");
    scanf(" %c", &k); 
    nhap(&b);
    if(b==0){
        printf("Khong hop le!");
    }
    else {
    switch (k){
        case '+': printf("%d",a+b);
                    break;
        case '-': printf("%d",a-b);
                break;
        case '*': printf("%d",a*b);
                    break;
        case '/': printf("%d",(float)a / b);
                    break;
        case '%': printf("%d", a % b);
                    break;
        default: printf("Khong hop le");
                    break;
    }}
}

int timMax(int a){
    nhap(&a);
    int du;
    int max = 0;
    while (a != 0){
        du = a % 10;
        a = a / 10;
        if (max < du){
            max = du;
        }
    }
    return max;
}

void inSole(int a, int b){
    nhap(&a);
    nhap(&b);
    int i;
    printf("Cac so le trong khoang a b la: ");
    for (i = a; i <= b; i++){
        if (i % 2 == 1)
            printf("%d\n", i);
    }
}

int timTich(int n){
    nhap(&n);
    int tich = 1, i;
    for (i = 1; i <= n; i++){
        tich *= i;
    }
    return tich;
}

int kiemtraSHH(int a){
    nhap(&a);
    int sum = 0;
    int i;
    for (i = 2; i <= sqrt(a); i++){
        if (a % i == 0){
            sum ++;
        }
    }
    if (sum == 0)
        return 1;
    else
        return 0;
}

int main(){
    int option, a, b, n;
    int z,x,v;
    char s[20], k, c[20];
    printf("1. Tinh tich cac so tu 1 den n\n");
    printf("2. In ra cac so le trong khoang a den b\n");
    printf("3. Kiem tra so nguyen to \n");
    printf("4. Tim max\n");
    printf("5. Nhan 3 tham so va in ra ket qua tuong ung\n");
    printf("6. Dem so luong cac chu so cua chuoi nhap vao\n");   
    do {
        printf("Ban muon lam bai nao: \n");
        scanf("%d", &option);
        if (option == 0)
            break;
        switch (option) {
            case 1:
                z = timTich(a);
                printf("Tich tu 1 den n la: %d", z);
                break;
            case 2:
                inSole(a, b);
                break;
            case 3:
                if (kiemtraSHH(a))
                    printf("Day la so nguyen to");
                else
                    printf("Day khong phai la so nguyen to");
                break;
            case 4:
                x = timMax(a);
                printf("Chu so lon nhat la: %d", x);
                break;
            case 5:
               tinhToan(a, b, k);
                break;
            case 6:
                v = demDigits(c);
                printf("So luong cac chu so nhap vao la: %d", v);
                break;
            default:
                printf("Lua chon khong hop le!\n");
                break;
        }
        printf("\nBan co muon tiep tuc khong ? (yes hoac no)\n");
        scanf("%s", s);
    } while (strcmp(s, "yes") == 0);
    return 0;   
}
