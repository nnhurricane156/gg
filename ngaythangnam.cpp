#include <iostream>
using namespace std;

bool Kiemtranhuan(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

int main() {
    int day, month, year;
    cout << "Nhap ngay: ";
    cin >> day;
    cout << "Nhap thang: ";
    cin >> month;
    cout << "Nhap nam: ";
    cin >> year;

    int daysInMonth[] = {31, 28 + Kiemtranhuan(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (day < daysInMonth[month - 1]) {
        day++;
    } else {
        day = 1;
        if (month == 12) {
            month = 1;
            year++;
        } else {
            month++;
        }
    }

    cout << "Ngay tiep theo la: " << day << "/" << month << "/" << year << endl;

    return 0;
}