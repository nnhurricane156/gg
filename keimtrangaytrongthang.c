#include <stdio.h>
#include<stdbool.h>
bool Kiemtranhuan(int year) { //kiem tra nam nay co phai nam nhuan hay khong 
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);/*n
    neu no chia het cho 4 mà k chia hết cho 100 hoặc là chia hết cho 400 thì trả về 1 còn không thì sẽ trả về 0 bởi
    vì trong hàm bool gía trị 0 được quy định là false còn giá trị 1 được quy định là true;
    */
}
int main() {
    int month, year;
    printf("Nhap thang: ");
    scanf("%d",&month);
    printf("Nhap nam: ");
    scanf("%d",&year);

    int soNgayTrongThang[] = {31, 28 + Kiemtranhuan(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    /*nhap 1 mảng gồm các số ngày trong 12 tháng lần lượt ở tháng 2 chúng ta viết 28 +Kiemtranamnhuan(year) 
    bởi vì hàm kiểm tra năm nhuận sẽ trả về giá trị 1 nếu là năm nhuận ngược lại thì trả về giá trị 0
    */
    printf("So ngay trong thang %d la: %d ",month,soNgayTrongThang[month-1]);
    //xuất ra màn hình tháng và số ngày trong tháng vì trong mảng stt được đánh từ 0 đến n-1 với n là số phần tử có trong mảng
    // nên cần phải -1 thì giá trị mới chính xác năm ở tháng 2.
    return 0;
}