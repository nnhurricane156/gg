#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int n=5, times = 3;
    int so;
 
    printf("Ban duoc phep doan 3 lan thu trong doan [1,10] \n");
    printf("Hay nhap so: "); 
    nhaplai:
    scanf("%d", &so); 
    if (so < 1 || so > 10) {
        printf("Hay doc ki de\n ");
        printf("Hay nhap lai: ");
        goto nhaplai;
    }    
    while (so != n && times != 1) {
        times--;
        if (so > n)
            printf("So cua ban lon hon so bi mat\n");
        else
            printf("So can doan nho hon so bi mat\n");
        printf("Ban con %d lan thu\n", times);
        printf("Hay nhap lai: ");
        scanf("%d", &so);
    }
    if (so!= n && times == 1)
        printf("Ban da thua");
    else
        printf("Ban da thang voi %d lan thu", 4 - times);
    return 0;
}
