#include<stdio.h>
int main(){
    int a,count,sum=0;
    int max = 0;
    float average;
    printf("Nhap n: ");
    scanf("%d",&a);
    if(a==0){
    printf("Loi roi");
    goto haha;
    }
    while (a!=0)
    {
        count++;
        sum+=a;
        if(a>max)
        max=a;
        printf("Nhap tiep n: ");
        scanf("%d",&a);
    }
    average=(float)sum/count;
    printf("Tong cua cac so la: %d\n",sum);
    printf("So so hang la: %d\n",count);
    printf("Trung binh cong la: %.2f\n",average);
    printf("Gia tri max la: %d\n",max);
    haha:
    return 0;
}
