#include <stdio.h>
#include <stdbool.h>
#include <math.h>
void nhap(int *a, int *b, int *c);
void xuat(int kq);
int Kiemtratg(int a, int b, int c);
bool Tamgiac(int a, int b, int c);
int main()
{
    int a,b,c;
    nhap(&a,&b,&c);
    int kq=Kiemtratg(a,b,c);
    xuat(kq);
    return 0;
}
void nhap(int *a, int *b, int *c)
{
    do {
        scanf("%d%d%d",a,b,c);
    }
    while((Tamgiac(a,b,c))==0);
}
void xuat(int kq)
{
    if (kq==0)
        printf("Khong phai tam giac");
    if (kq==1)
        printf("Day la tam giac deu");
    if(kq ==2)
        printf("Day la tam giac vuong can");
    if(kq==3)
        printf("Day la tam giac vuong");
    if(kq==4)
        printf("Day la tam giac can");
    if(kq==5)
        printf("Day la tam giac thuong");
}
int Kiemtratg(int a, int b, int c)
{
    if (Tamgiac(a,b,c))
    {
        if (a==b &&b==c)
            return 1;
        else
        {
            if ((a==b||b==c||a==c))
                {
                    if (a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
                    return 2;
                    else 
                    return 4;
                }
                else 
                {
                if (a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
                return 3;
                else return 5;
            }
        }
    }
    else 
    return 0;
}

bool Tamgiac(int a, int b, int c)
{
    if (a>0 &&b>0&&c>00&&a+b>c&&a+b>c&&b+c>a)
    return true;
    else 
    return false;
}