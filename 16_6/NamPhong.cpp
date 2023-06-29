#include <iostream>

using namespace std;

void function1(int* arr, int& n);
void function2(int* arr, int option, int& n);
void themGiaTri(int*& arr, int& n);
void tim(int* arr, int n);
void xoa1(int*& arr, int& n);
void xoaHet(int* arr, int& n);
void xuat(int* arr, int n);
void sortAscending(int* arr, int n);
void sortDescending(int* arr, int n);

int main() {
    int n=0;
    int* arr = NULL;
    *arr = new int[50];
    function1(arr, n);
    delete[] arr;
    return 0;
}

void function1(int* arr, int& n) {
    int option;
    do {
        cout << "1-Add a value" << endl;
        cout << "2-Search a value" << endl;
        cout << "3-Remove the first existence of a value" << endl;
        cout << "4-Remove all existences of a value" << endl;
        cout << "5-Print out the array" << endl;
        cout << "6-Sort the array in ascending order (positions of elements are preserved)" << endl;
        cout << "7-Sort the array in descending order (positions of elements are preserved)" << endl;
        cout << "Please choose an option: ";
        cin >> option;
        if (option < 1 || option > 7) {
            cout << "Error!" << endl;
            break;
        } else {
            function2(arr, option, n);
            cout << endl;
        }
    } while (1);
}

void function2(int* arr, int option, int& n) {
    switch (option) {
        case 1:
            themGiaTri(arr, n);
            break;
        case 2:
            tim(arr, n);
            break;
        case 3:
            xoa1(arr, n);
            break;
        case 4:
            xoaHet(arr, n);
            break;
        case 5:
            xuat(arr, n);
            break;
        case 6:
            sortAscending(arr, n);
            break;
        case 7:
            sortDescending(arr, n);
            break;
    }
}

void themGiaTri(int*& arr, int& n) {
    n++;
    int* tempArr = new int[n];
    for (int i = 0; i < n - 1; i++) {
        tempArr[i] = arr[i];
    }
    cout << "Enter an integer to store: ";
    cin >> tempArr[n - 1];
    delete[] arr;
    arr = tempArr;
}

void tim(int* arr, int n) {
    int num, i;
    cout << "What number do you want to search? ";
    cin >> num; 
    bool found = false;   
    for (i = 0; i < n; i++) {
        if (num == arr[i]) {
            cout << "Your number is in slot " << i + 1 << " in the array." << endl;
            found = true;
            break;
        }
    } 
    if (!found) {
        cout << "Your number was not found." << endl;
    }
}


void xoa1(int*& arr, int& n) {
    int num;
    cout << "What number do you want to remove? ";
    cin >> num;
    for (int i = 0; i < n; i++) {
        if (num == arr[i]) {
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            break;
        }
    }
    n--;
}

void xoaHet(int* arr, int& n) {
    int num;
    cout << "What number do you want to remove? ";
    cin >> num;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (num == arr[i]) {
            count++;
        }
    }
    int* tempArr = new int[n - count];
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != num) {
            tempArr[index] = arr[i];
            index++;
        }
    }
    delete[] arr;
    arr = tempArr;
    n -= count;
}

void xuat(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
}

void sortAscending(int* arr, int n) {
    int* copy = new int[n];
    for (int i = 0; i < n; i++) {
        copy[i] = arr[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (copy[i] > copy[j]) {
                std::swap(copy[i], copy[j]);
            }
        }
    }
    xuat(copy, n);
    delete[] copy;
}

void sortDescending(int* arr, int n) {
    int* copy = new int[n];
    for (int i = 0; i < n; i++) {
        copy[i] = arr[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (copy[i] < copy[j]) {
                std::swap(copy[i], copy[j]);
            }
        }
    }
    xuat(copy, n);
    delete[] copy;
}
