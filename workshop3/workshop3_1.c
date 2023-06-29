#include<stdio.h>
#include<math.h>
int prime(int number) {
    int i;

    if (number <= 1) {
        return 0; 
    }
    for (i = 2; i<=sqrt(number); i++) {
        if (number % i == 0) {
            return 0; 
        }
    }
    return 1; 
}
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    int i;
    if(n>=2)
    {
        for(i=0;i<=n;i++)
            if((prime(i)))
                printf("%d\n",i);
    }
    return 0;
}