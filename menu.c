#include <stdio.h>
#include <string.h>
void nhap(int *n);
int demDigits(char c[]);
int kiemtraSHH(int a);
int timTich(int n);
int tinhToan(int a, int b, char k) ;
int timMax(int a);
void inSole(int a, int b);
int main() {
    int option, a, b, n;
    char s[20], k, c[20];
    int z, x, v, result; 
    printf("1. Tinh tich cac so tu 1 den n\n");
    printf("2. In ra cac so le trong khoang a den b\n");
    printf("3. Kiem tra so hoan hao \n");
    printf("4. Tim max\n");
    printf("5. Nhan 3 tham so va in ra ket qua tuong ung\n");
    printf("6. Dem so luong cac chu so cua chuoi nhap vao\n");
    do {
        printf("Ban muon lam bai nao: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                z = timTich(a);
                printf("Tich tu 1 den n la: %d", z);
                break;
            case 2:
                inSole(a, b);
                break;
            case 3:
                kiemtraSHH(a);
                if (kiemtraSHH(a))
                    printf("Day la so hoan hao");
                else
                    printf("Day khong phai la so hoan hao");
                break;
            case 4:
                x = timMax(a);
                printf("Chu so lon nhat la: %d", x);
                break;
            case 5:
                result = tinhToan(a, b, k);
                printf("Ket qua la: %d", result);
                break;
            case 6:
                v = demDigits(c);
                printf("So luong cac chu so nhap vao la: %d", v);
                break;
            default:
                printf("Lua chon khong hop le!\n");
                break;
        }
        printf("\nBan co muon tiep tuc khong? (yes hoac no)\n");
        scanf("%s", s);
    } while (strcmp(s, "yes") == 1);
    return 0;
}
int demDigits(char c[]){
    int dem = 0, i;
    int dai = strlen(c);
    printf("Nhap vao chuoi: \n");
    gets(c);
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
int tinhToan(int a, int b, char k) {
    nhap(&a);
    fflush(stdin);
    printf("Nhap vao toan tu:\n");
    scanf(" %c", &k);
    fflush(stdin);
    nhap(&b);
    if(b==0){
        printf("Khong hop le.\n");
        return 0;
    }
    switch (k) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return (float)a / b;
        case '%': return a % b;
        default: return 0;
    }
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
    int sum = 0;
    int i;
    for (i = 1; i <= a / 2; i++){
        if (a % i == 0){
            sum += i;
        }
    }
    if (sum == a)
        return 1;
    else
        return 0;
}