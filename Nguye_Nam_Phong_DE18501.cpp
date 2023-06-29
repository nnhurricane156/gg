#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n, m;
    int a[1000];
    cout<<"Nhap so he thap phan: ";
    cin>>n;
    cout<<"Nhap he so muon chuyen doi: ";
    cin>>m;
    //Chuyen sang he 2
    if (m == 2){
    printf("Ket qua: ");
    int i = 0;
    while(n != 0){
        a[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i-1 ; j >= 0; j--){
        cout<<a[j];
    }
}
//Chuyen sang he  8
    if (m == 8){
    cout<<"Ket qua: ";
    int i = 0;
    while(n != 0){
        a[i] = n % 8;
        n = n / 8;
        i++;
    }
    for (int j = i-1; j >= 0; j--){
        cout<<a[j];
    }
    }
    //Chuyen sang he 16
    if (m == 16){
    cout<<"Ket qua: ";
    int k;
    char b[100];
    int i = 0;
    while(n != 0){
        k = n % 16;
        n= n / 16;
    if (k < 10)
        b[i] = k + '0';
    else
        b[i] = k + 55;
    i++;
    }
        b[i]='\0';
        strrev(b);
        cout<<b;
    }   
    return 0;
}